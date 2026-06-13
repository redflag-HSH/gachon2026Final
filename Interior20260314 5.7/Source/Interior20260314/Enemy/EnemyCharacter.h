#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Item.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class INTERIOR20260314_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AEnemyCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float DetectionRange = 1500.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float ChaseSpeed = 300.f;

	UPROPERTY()
	TObjectPtr<AActor> PlayerTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drop")
	TSubclassOf<AItem> DropItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Drop", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float DropChance = 0.3f;

	void ChasePlayer(float DeltaTime);

	virtual void OnDeath();

public:
	UFUNCTION(BlueprintCallable, Category = "Stats")
	virtual void TakeDamage_Custom(float DamageAmount);
};
