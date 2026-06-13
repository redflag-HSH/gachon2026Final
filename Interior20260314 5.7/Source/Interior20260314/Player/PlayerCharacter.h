#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerCharacter.generated.h"

class UCapsuleComponent;
class UStaticMeshComponent;
class ABullet;

UCLASS()
class INTERIOR20260314_API APlayerCharacter : public APawn
{
	GENERATED_BODY()

public:
	APlayerCharacter();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void Fire();

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void AddBullet();

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnEnemyOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	                    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	                    bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UCapsuleComponent> CapsuleComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> MeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	TSubclassOf<ABullet> BulletClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float FireCooldown = 0.15f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float BulletSpread = 15.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float InvincibilityDuration = 1.5f;

private:
	int32 BulletCount = 1;

	bool bCanFire = true;
	bool bInvincible = false;

	FTimerHandle FireCooldownTimer;
	FTimerHandle InvincibilityTimer;
};
