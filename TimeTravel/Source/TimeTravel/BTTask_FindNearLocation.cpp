// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_FindNearLocation.h"
#include "BehaviorTree/BTNode.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "Engine.h"
#include "RobotAIController.h"
#include "NavigationSystem.h"

EBTNodeResult::Type UBTTask_FindNearLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	const UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(this);

	ARobotAIController* MyController = Cast<ARobotAIController>(OwnerComp.GetAIOwner());

	if (NavSys && MyController && MyController->GetPawn())
	{
		const float SearchRadius = 300.f;	

		FNavLocation RandomPt;

		//bool bFound = NavSys->GetRandomPointNavigableRadius(MyController->GetPawn()->GetActorLocation(), SearchRadius, RandomPt);
		bool bFound = NavSys->K2_GetRandomPointInNavigableRadius(MyController->GetPawn(), MyController->GetPawn()->GetActorLocation(), RandomPt.Location, SearchRadius);

		if (bFound)
		{
			OwnerComp.GetBlackboardComponent()->SetValue<UBlackboardKeyType_Vector>(GetSelectedBlackboardKey(), RandomPt.Location);

			return EBTNodeResult::Succeeded;
		}

	}

	return EBTNodeResult::Failed;
}