// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "RobotAIController.generated.h"

/**
 * 
 */
class UBehaviorTreeComponent;
class UBlackboardComponent;
UCLASS()
class TIMETRAVEL_API ARobotAIController : public AAIController
{
	GENERATED_BODY()

		virtual void Possess(class APawn* InPawn) override;
	
	UBehaviorTreeComponent* BehaviorComp;
	UBlackboardComponent* BlackboardComp;

	ARobotAIController();

public:
	void SetEnemy(class APawn* InPawn);

};
