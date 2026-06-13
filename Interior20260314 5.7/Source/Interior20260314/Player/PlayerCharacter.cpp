#include "PlayerCharacter.h"
#include "Bullet.h"
#include "EnemyCharacter.h"
#include "Interior20260314GameMode.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComp"));
	CapsuleComp->InitCapsuleSize(50.f, 50.f);
	CapsuleComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CapsuleComp->SetCollisionResponseToAllChannels(ECR_Block);
	CapsuleComp->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Overlap);
	CapsuleComp->SetGenerateOverlapEvents(true);
	RootComponent = CapsuleComp;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);


}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	CapsuleComp->OnComponentBeginOverlap.AddDynamic(this, &APlayerCharacter::OnEnemyOverlap);
}

void APlayerCharacter::OnEnemyOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                       UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
                                       bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor || bInvincible) return;
	if (!Cast<AEnemyCharacter>(OtherActor)) return;

	if (BulletCount > 1)
	{
		BulletCount--;
	}
	else
	{
		Destroy();
		if (AInterior20260314GameMode* GM = Cast<AInterior20260314GameMode>(GetWorld()->GetAuthGameMode()))
		{
			GM->OnPlayerDied();
		}
		return;
	}

	bInvincible = true;
	GetWorldTimerManager().SetTimer(InvincibilityTimer, [this]() { bInvincible = false; }, InvincibilityDuration, false);
}

void APlayerCharacter::Fire()
{
	if (!bCanFire || !BulletClass) return;

	const FVector Origin = GetActorLocation();

	const float TotalSpread = BulletSpread * (BulletCount - 1);
	const float StartAngle = -TotalSpread * 0.5f;

	FActorSpawnParameters Params;
	Params.Owner = this;
	Params.Instigator = this;

	for (int32 i = 0; i < BulletCount; i++)
	{
		const float Angle = StartAngle + BulletSpread * i;
		const FVector ShotDir = FVector(0.f, 0.f, 1.f).RotateAngleAxis(Angle, FVector(1.f, 0.f, 0.f));
		GetWorld()->SpawnActor<ABullet>(BulletClass, Origin, ShotDir.Rotation(), Params);
	}

	bCanFire = false;
	GetWorldTimerManager().SetTimer(FireCooldownTimer, [this]() { bCanFire = true; }, FireCooldown, false);
}

void APlayerCharacter::AddBullet()
{
	BulletCount++;
}
