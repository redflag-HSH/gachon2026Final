#include "Bullet.h"
#include "EnemyCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

ABullet::ABullet()
{
	PrimaryActorTick.bCanEverTick = false;

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	CollisionSphere->InitSphereRadius(15.f);
	CollisionSphere->SetCollisionObjectType(ECC_GameTraceChannel2);
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	CollisionSphere->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Overlap);
	CollisionSphere->SetGenerateOverlapEvents(true);
	RootComponent = CollisionSphere;

	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletMesh"));
	BulletMesh->SetupAttachment(RootComponent);
	BulletMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->InitialSpeed = Speed;
	ProjectileMovement->MaxSpeed = Speed;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 0.f;
}

void ABullet::BeginPlay()
{
	Super::BeginPlay();

	ProjectileMovement->Velocity = GetActorForwardVector() * Speed;

	CollisionSphere->OnComponentHit.AddDynamic(this, &ABullet::OnHit);
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnOverlapBegin);
	SetLifeSpan(LifeSpanSeconds);
}

void ABullet::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                    FVector NormalImpulse, const FHitResult& Hit)
{
	if (!OtherActor || OtherActor == GetOwner()) return;
	Destroy();
}

void ABullet::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                             UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
                             bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor || OtherActor == GetOwner()) return;

	if (AEnemyCharacter* Enemy = Cast<AEnemyCharacter>(OtherActor))
	{
		Enemy->TakeDamage_Custom(Damage);
		Destroy();
	}
}
