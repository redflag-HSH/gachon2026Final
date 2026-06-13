#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Interior20260314GameMode.generated.h"

UCLASS()
class INTERIOR20260314_API AInterior20260314GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AInterior20260314GameMode();

	UFUNCTION(BlueprintCallable, Category = "Game")
	void OnEnemyKilled();

	UFUNCTION(BlueprintCallable, Category = "Game")
	void OnBossKilled();

	UFUNCTION(BlueprintCallable, Category = "Game")
	void OnPlayerDied();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game")
	int32 Score = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game")
	int32 ScorePerEnemy = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game")
	int32 ScorePerBoss = 500;
};
