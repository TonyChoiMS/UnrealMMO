// Fill out your copyright notice in the Description page of Project Settings.

#include "RobotAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "RobotCharacter.h"

ARobotAIController::ARobotAIController()
{
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));
}

void ARobotAIController::Possess(class APawn* InPawn)
{
	Super::Possess(InPawn);

	ARobotCharacter* Bot = Cast<ARobotCharacter>(InPawn);
	
	if (Bot && Bot->BotBehavior)
	{
		if (Bot->BotBehavior->BlackboardAsset)
		{
			BlackboardComp->InitializeBlackboard(*Bot->BotBehavior->BlackboardAsset);
		}

		BehaviorComp->StartTree(*(Bot->BotBehavior));
	}
}

void ARobotAIController::SetEnemy(class APawn* InPawn)
{
	if (BlackboardComp)
	{
		BlackboardComp->SetValue<UBlackboardKeyType_Object>("TargetEnemy", InPawn);
	}
}
