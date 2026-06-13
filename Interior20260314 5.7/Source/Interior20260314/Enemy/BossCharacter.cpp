#include "BossCharacter.h"
#include "PlayerCharacter.h"
#include "Interior20260314GameMode.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

ABossCharacter::ABossCharacter()
{
}

void ABossCharacter::BeginPlay()
{
	Super::BeginPlay();
	CurrentHealth = MaxHealth;
	StartPos = GetActorLocation();
	BeginSelectPattern();
}

void ABossCharacter::Tick(float DeltaTime)
{
	ACharacter::Tick(DeltaTime);

	auto MoveToward = [this](const FVector& Target)
	{
		const FVector Dir = (Target - GetActorLocation()).GetSafeNormal2D();
		AddMovementInput(Dir);
	};

	auto HasArrived = [this](const FVector& Target) -> bool
	{
		return FVector::Dist2D(GetActorLocation(), Target) < ArrivalThreshold;
	};

	switch (BossState)
	{
		case EBossState::Pattern1_ToPos1:
		{
			const FVector Dest = StartPos + Pattern1Offset1;
			if (HasArrived(Dest)) OnArriveAtPos1();
			else                  MoveToward(Dest);
			break;
		}
		case EBossState::Pattern1_ToPos2:
		{
			const FVector Dest = StartPos + Pattern1Offset2;
			if (HasArrived(Dest)) OnArriveAtPos2();
			else                  MoveToward(Dest);
			break;
		}
		case EBossState::Pattern1_Return:
		{
			if (HasArrived(StartPos)) OnReturnedToStart();
			else                      MoveToward(StartPos);
			break;
		}
		default:
			break;
	}
}

void ABossCharacter::BeginSelectPattern()
{
	BossState = EBossState::SelectingPattern;
	GetCharacterMovement()->StopMovementImmediately();
	GetWorldTimerManager().SetTimer(PhaseTimer, this, &ABossCharacter::EnterPattern1_ToPos1, PatternSelectDuration, false);
}

void ABossCharacter::EnterPattern1_ToPos1()
{
	BossState = EBossState::Pattern1_ToPos1;
	GetCharacterMovement()->MaxWalkSpeed = NavigationSpeed;
}

void ABossCharacter::OnArriveAtPos1()
{
	BossState = EBossState::Pattern1_AtPos1;
	GetCharacterMovement()->StopMovementImmediately();
	SpawnMonstersAtSides();
	GetWorldTimerManager().SetTimer(PhaseTimer, this, &ABossCharacter::EnterPattern1_ToPos2, SpawnPauseDelay, false);
}

void ABossCharacter::EnterPattern1_ToPos2()
{
	BossState = EBossState::Pattern1_ToPos2;
}

void ABossCharacter::OnArriveAtPos2()
{
	BossState = EBossState::Pattern1_AtPos2;
	GetCharacterMovement()->StopMovementImmediately();
	SpawnMonstersAtSides();
	GetWorldTimerManager().SetTimer(PhaseTimer, this, &ABossCharacter::EnterPattern1_Return, SpawnPauseDelay, false);
}

void ABossCharacter::EnterPattern1_Return()
{
	BossState = EBossState::Pattern1_Return;
}

void ABossCharacter::OnReturnedToStart()
{
	GetCharacterMovement()->StopMovementImmediately();
	EnterPattern2_PreCharge();
}

void ABossCharacter::SpawnMonstersAtSides()
{
	if (!SpawnEnemyClass) return;

	const FVector Loc = GetActorLocation();
	GetWorld()->SpawnActor<AEnemyCharacter>(SpawnEnemyClass,
		Loc + FVector(0.f, -MonsterSideOffset, 0.f), FRotator::ZeroRotator);
	GetWorld()->SpawnActor<AEnemyCharacter>(SpawnEnemyClass,
		Loc + FVector(0.f,  MonsterSideOffset, 0.f), FRotator::ZeroRotator);
}


void ABossCharacter::EnterPattern2_PreCharge()
{
	BossState = EBossState::Pattern2_PreCharge;
	GetWorldTimerManager().SetTimer(PhaseTimer, this, &ABossCharacter::EnterPattern2_Charge1, PreChargeDelay, false);
}

void ABossCharacter::EnterPattern2_Charge1()
{
	BossState = EBossState::Pattern2_Charge1;
	LaunchCharge();
	GetWorldTimerManager().SetTimer(PhaseTimer, this, &ABossCharacter::OnCharge1End, ChargeDuration, false);
}

void ABossCharacter::OnCharge1End()
{
	bIsCharging = false;
	GetCharacterMovement()->StopMovementImmediately();
	EnterPattern2_BetweenCharges();
}

void ABossCharacter::EnterPattern2_BetweenCharges()
{
	BossState = EBossState::Pattern2_BetweenCharges;
	GetWorldTimerManager().SetTimer(PhaseTimer, this, &ABossCharacter::EnterPattern2_Charge2, BetweenChargesDelay, false);
}

void ABossCharacter::EnterPattern2_Charge2()
{
	BossState = EBossState::Pattern2_Charge2;
	LaunchCharge();
	GetWorldTimerManager().SetTimer(PhaseTimer, this, &ABossCharacter::OnCharge2End, ChargeDuration, false);
}

void ABossCharacter::OnCharge2End()
{
	bIsCharging = false;
	GetCharacterMovement()->StopMovementImmediately();
	BeginSelectPattern();
}

void ABossCharacter::LaunchCharge()
{
	if (!PlayerTarget) return;
	bIsCharging = true;
	GetCharacterMovement()->MaxWalkSpeed = ChargeSpeed;
	const FVector Dir = (PlayerTarget->GetActorLocation() - GetActorLocation()).GetSafeNormal();
	LaunchCharacter(Dir * ChargeSpeed, true, true);
}

void ABossCharacter::TakeDamage_Custom(float DamageAmount)
{
	CurrentHealth = FMath::Clamp(CurrentHealth - DamageAmount, 0.f, MaxHealth);
	if (CurrentHealth <= 0.f)
		OnDeath();
}

void ABossCharacter::OnDeath()
{
	BossState = EBossState::Dead;
	GetWorldTimerManager().ClearTimer(PhaseTimer);
	SetActorTickEnabled(false);

	if (AInterior20260314GameMode* GM = Cast<AInterior20260314GameMode>(GetWorld()->GetAuthGameMode()))
		GM->OnBossKilled();

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	GetMesh()->SetSimulatePhysics(true);
	SetLifeSpan(3.f);
}
