#include "ShooterPlayerController.h"
#include "PlayerCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

AShooterPlayerController::AShooterPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AShooterPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(IMC, 0);
	}
}

void AShooterPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	APawn* ControlledPawn = GetPawn();
	if (!ControlledPawn) return;

	const FVector Delta(0.f,
	                    MoveRightInput * MoveSpeed * DeltaTime,
	                    MoveUpInput    * MoveSpeed * DeltaTime);

	if (!Delta.IsZero())
	{
		ControlledPawn->AddActorWorldOffset(Delta, true);
	}
}

void AShooterPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(InputComponent))
	{
		EIC->BindAction(MoveUpAction,    ETriggerEvent::Triggered, this, &AShooterPlayerController::OnMoveUp);
		EIC->BindAction(MoveUpAction,    ETriggerEvent::Completed, this, &AShooterPlayerController::OnMoveUp);
		EIC->BindAction(MoveRightAction, ETriggerEvent::Triggered, this, &AShooterPlayerController::OnMoveRight);
		EIC->BindAction(MoveRightAction, ETriggerEvent::Completed, this, &AShooterPlayerController::OnMoveRight);
		EIC->BindAction(ShootAction,     ETriggerEvent::Started,   this, &AShooterPlayerController::OnShoot);
	}
}

void AShooterPlayerController::OnMoveUp(const FInputActionValue& Value)
{
	MoveUpInput = Value.Get<float>();
}

void AShooterPlayerController::OnMoveRight(const FInputActionValue& Value)
{
	MoveRightInput = Value.Get<float>();
}

void AShooterPlayerController::OnShoot()
{
	if (APlayerCharacter* PlayerChar = Cast<APlayerCharacter>(GetPawn()))
	{
		PlayerChar->Fire();
	}
}
