#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UENUM(BlueprintType)
enum class EItemType : uint8
{
	Score     UMETA(DisplayName = "Score"),
	MultiShot UMETA(DisplayName = "MultiShot")
};

UCLASS()
class INTERIOR20260314_API AItem : public AActor
{
	GENERATED_BODY()

public:
	AItem();

	UFUNCTION(BlueprintCallable, Category = "Item")
	void SetItemType(EItemType NewType) { ItemType = NewType; }

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	                    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
	                    bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<USphereComponent> PickupSphere;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	EItemType ItemType = EItemType::Score;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	float ItemValue = 30.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	float FallSpeed = 150.f;

	virtual void Tick(float DeltaTime) override;
};
