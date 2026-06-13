#include "Item.h"
#include "PlayerCharacter.h"
#include "Interior20260314GameMode.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

	PickupSphere = CreateDefaultSubobject<USphereComponent>(TEXT("PickupSphere"));
	PickupSphere->InitSphereRadius(80.f);
	PickupSphere->SetCollisionProfileName(TEXT("OverlapAll"));
	RootComponent = PickupSphere;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	ItemMesh->SetupAttachment(RootComponent);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorWorldOffset(FVector(0.f, 0.f, -FallSpeed * DeltaTime));
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
	PickupSphere->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnOverlapBegin);
}

void AItem::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                           UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
                           bool bFromSweep, const FHitResult& SweepResult)
{
	APlayerCharacter* Player = Cast<APlayerCharacter>(OtherActor);
	if (!Player) return;

	switch (ItemType)
	{
		case EItemType::Score:
			if (AInterior20260314GameMode* GM = Cast<AInterior20260314GameMode>(GetWorld()->GetAuthGameMode()))
			{
				GM->OnEnemyKilled();
			}
			break;

		case EItemType::MultiShot:
			Player->AddBullet();
			break;
	}

	Destroy();
}
