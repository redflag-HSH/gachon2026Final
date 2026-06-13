#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputActionValue.h"
#include "ShooterPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class INTERIOR20260314_API AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AShooterPlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> IMC;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> MoveUpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> MoveRightAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UInputAction> ShootAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed = 600.f;

private:
	void OnMoveUp(const FInputActionValue& Value);
	void OnMoveRight(const FInputActionValue& Value);
	void OnShoot();

	float MoveUpInput   = 0.f;
	float MoveRightInput = 0.f;
};
