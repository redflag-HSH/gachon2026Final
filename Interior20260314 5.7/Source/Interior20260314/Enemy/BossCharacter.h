#pragma once

#include "CoreMinimal.h"
#include "EnemyCharacter.h"
#include "BossCharacter.generated.h"

UENUM(BlueprintType)
enum class EBossState : uint8
{
	SelectingPattern,
	Pattern1_ToPos1,
	Pattern1_AtPos1,
	Pattern1_ToPos2,
	Pattern1_AtPos2,
	Pattern1_Return,
	Pattern2_PreCharge,
	Pattern2_Charge1,
	Pattern2_BetweenCharges,
	Pattern2_Charge2,
	Dead
};

UCLASS()
class INTERIOR20260314_API ABossCharacter : public AEnemyCharacter
{
	GENERATED_BODY()

public:
	ABossCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Pattern1")
	FVector Pattern1Offset1 = FVector(0.f, -600.f, 0.f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Pattern1")
	FVector Pattern1Offset2 = FVector(0.f, 600.f, 0.f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Pattern1")
	TSubclassOf<AEnemyCharacter> SpawnEnemyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Pattern1")
	float MonsterSideOffset = 250.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Pattern1")
	float SpawnPauseDelay = 0.8f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Pattern2")
	float ChargeSpeed = 1400.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Pattern2")
	float ChargeDuration = 0.7f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Pattern2")
	float PreChargeDelay = 1.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Pattern2")
	float BetweenChargesDelay = 1.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss|Stats")
	float MaxHealth = 500.f;

	UPROPERTY(BlueprintReadOnly, Category = "Boss|Stats")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss")
	float PatternSelectDuration = 3.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss")
	float NavigationSpeed = 500.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boss")
	float ArrivalThreshold = 100.f;

	EBossState BossState = EBossState::SelectingPattern;
	FVector StartPos;
	bool bIsCharging = false;

	FTimerHandle PhaseTimer;

	void BeginSelectPattern();

	void EnterPattern1_ToPos1();
	void OnArriveAtPos1();
	void EnterPattern1_ToPos2();
	void OnArriveAtPos2();
	void EnterPattern1_Return();
	void OnReturnedToStart();
	void SpawnMonstersAtSides();

	void EnterPattern2_PreCharge();
	void EnterPattern2_Charge1();
	void OnCharge1End();
	void EnterPattern2_BetweenCharges();
	void EnterPattern2_Charge2();
	void OnCharge2End();
	void LaunchCharge();

	virtual void TakeDamage_Custom(float DamageAmount) override;
	virtual void OnDeath() override;

public:
	UFUNCTION(BlueprintPure, Category = "Boss|Stats")
	float GetHealthPercent() const { return CurrentHealth / MaxHealth; }
};
