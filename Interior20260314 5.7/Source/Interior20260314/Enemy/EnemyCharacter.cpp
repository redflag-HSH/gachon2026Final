#include "EnemyCharacter.h"
#include "EnemyManager.h"
#include "PlayerCharacter.h"
#include "Interior20260314GameMode.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

AEnemyCharacter::AEnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Enemy"));
	GetCharacterMovement()->MaxWalkSpeed = ChaseSpeed;
}

void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	PlayerTarget = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
}

void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!PlayerTarget) return;

	const float Distance = FVector::Dist(GetActorLocation(), PlayerTarget->GetActorLocation());
	if (Distance > DetectionRange) return;

	ChasePlayer(DeltaTime);
}

void AEnemyCharacter::ChasePlayer(float DeltaTime)
{
	const FVector Direction = (PlayerTarget->GetActorLocation() - GetActorLocation()).GetSafeNormal();
	AddMovementInput(Direction);
}

void AEnemyCharacter::TakeDamage_Custom(float DamageAmount)
{
	OnDeath();
}

void AEnemyCharacter::OnDeath()
{
	SetActorTickEnabled(false);
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMesh()->SetSimulatePhysics(true);

	if (AInterior20260314GameMode* GM = Cast<AInterior20260314GameMode>(GetWorld()->GetAuthGameMode()))
	{
		GM->OnEnemyKilled();
	}

	if (AEnemyManager* Manager = Cast<AEnemyManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AEnemyManager::StaticClass())))
	{
		Manager->OnEnemyDied();
	}

	if (DropItemClass && FMath::FRand() <= DropChance)
	{
		AItem* SpawnedItem = GetWorld()->SpawnActor<AItem>(DropItemClass, GetActorLocation(), FRotator::ZeroRotator);
		if (SpawnedItem)
		{
			SpawnedItem->SetItemType(EItemType::MultiShot);
		}
	}

	SetLifeSpan(3.f);
}
