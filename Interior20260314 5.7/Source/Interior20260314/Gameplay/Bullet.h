#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UStaticMeshComponent;

UCLASS()
class INTERIOR20260314_API ABullet : public AActor
{
	GENERATED_BODY()

public:
	ABullet();

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	           FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	                    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	                    bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<USphereComponent> CollisionSphere;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> BulletMesh;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float Damage = 20.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float Speed = 3000.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float LifeSpanSeconds = 3.f;
};
