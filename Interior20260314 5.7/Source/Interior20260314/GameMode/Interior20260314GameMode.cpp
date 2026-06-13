#include "Interior20260314GameMode.h"
#include "PlayerCharacter.h"
#include "ShooterPlayerController.h"

AInterior20260314GameMode::AInterior20260314GameMode()
{
	DefaultPawnClass       = APlayerCharacter::StaticClass();
	PlayerControllerClass  = AShooterPlayerController::StaticClass();
}

void AInterior20260314GameMode::OnEnemyKilled()
{
	Score += ScorePerEnemy;
}

void AInterior20260314GameMode::OnBossKilled()
{
	Score += ScorePerBoss;
}

void AInterior20260314GameMode::OnPlayerDied()
{
	
}
