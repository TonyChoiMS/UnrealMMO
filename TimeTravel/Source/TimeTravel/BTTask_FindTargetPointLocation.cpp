// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_FindTargetPointLocation.h"
#include "BehaviorTree/BTNode.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "RobotAIController.h"
#include "Engine.h"
#include "BotTargetPoint.h"

EBTNodeResult::Type UBTTask_FindTargetPointLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ARobotAIController* MyController = Cast<ARobotAIController>(OwnerComp.GetAIOwner());

	if (MyController == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	AActor* NewTargetPoint = nullptr;

	TArray<AActor*> AllTargetPoints;

	UGameplayStatics::GetAllActorsOfClass(MyController, ABotTargetPoint::StaticClass(), AllTargetPoints);

	if (AllTargetPoints.Num() == 0)
	{
		return EBTNodeResult::Failed;
	}

	NewTargetPoint = AllTargetPoints[FMath::RandRange(0, AllTargetPoints.Num() - 1)];

	if (NewTargetPoint)
	{
		OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(BlackboardKey.GetSelectedKeyID(), NewTargetPoint);

		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}