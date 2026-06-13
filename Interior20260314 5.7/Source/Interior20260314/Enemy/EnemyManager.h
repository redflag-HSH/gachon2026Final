#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyManager.generated.h"

class AEnemyCharacter;
class ABossCharacter;

UCLASS()
class INTERIOR20260314_API AEnemyManager : public AActor
{
	GENERATED_BODY()

public:
	AEnemyManager();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	TSubclassOf<AEnemyCharacter> EnemyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	TSubclassOf<ABossCharacter> BossClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	TArray<FVector> SpawnLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	int32 EnemiesPerWave = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	int32 TotalWaves = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float WaveDelay = 5.f;

	UPROPERTY(BlueprintReadOnly, Category = "Spawning")
	int32 CurrentWave = 0;

	UPROPERTY(BlueprintReadOnly, Category = "Spawning")
	int32 AliveEnemies = 0;

	FTimerHandle WaveTimer;

	void SpawnWave();
	void SpawnBoss();

public:
	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void OnEnemyDied();
};
