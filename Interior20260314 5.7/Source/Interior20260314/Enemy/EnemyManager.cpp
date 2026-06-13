#include "EnemyManager.h"
#include "EnemyCharacter.h"
#include "BossCharacter.h"

AEnemyManager::AEnemyManager()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AEnemyManager::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(WaveTimer, this, &AEnemyManager::SpawnWave, WaveDelay, false);
}

void AEnemyManager::SpawnWave()
{
	if (CurrentWave >= TotalWaves)
	{
		SpawnBoss();
		return;
	}

	CurrentWave++;
	AliveEnemies = EnemiesPerWave;

	for (int32 i = 0; i < EnemiesPerWave; i++)
	{
		FVector SpawnLoc;
		SpawnLoc = GetActorLocation() + FVector(
			FMath::RandRange(-500.f, 500.f),
			FMath::RandRange(-500.f, 500.f),
			0.f);

		GetWorld()->SpawnActor<AEnemyCharacter>(EnemyClass, SpawnLoc, FRotator::ZeroRotator);
	}
}

void AEnemyManager::SpawnBoss()
{
	if (!BossClass) return;

	const FVector BossSpawn = SpawnLocations.IsEmpty()
		? GetActorLocation()
		: SpawnLocations[0];

	GetWorld()->SpawnActor<ABossCharacter>(BossClass, BossSpawn, FRotator::ZeroRotator);
}

void AEnemyManager::OnEnemyDied()
{
	AliveEnemies = FMath::Max(0, AliveEnemies - 1);

	if (AliveEnemies <= 0)
	{
		GetWorldTimerManager().SetTimer(WaveTimer, this, &AEnemyManager::SpawnWave, WaveDelay, false);
	}
}
