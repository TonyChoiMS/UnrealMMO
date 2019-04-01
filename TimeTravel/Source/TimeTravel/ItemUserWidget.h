// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetTree.h"
#include "CanvasPanel.h"
#include "CanvasPanelSlot.h"
#include "Border.h"
#include "TextBlock.h"
#include "ItemUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class TIMETRAVEL_API UItemUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	// TSharedRef는 NULL이 가능하지 않은 공유 포인트(레퍼런스)로 SWidget을 여러군데에서 공유로 사용하고자 할 때 사용된다.
	// NULL이 가능하지 않으므로, 오브젝트에 안전하게 접근할 수 있어 깔끔한 코드를 작성하는데 도움이 된다.
	// 항상 유효하기 때문에 IsValid() 함수도 지원하지 않음.
	// 언리얼 레퍼런스에서는 공유 포인터보다는 TSharedRef를 사용하길 권장한다.
	// 비어있거나 NULL이 가능한 레퍼런스가 필요하다면 TSharedPtr을 사용해야한다.
	virtual TSharedRef<SWidget> RebuildWidget();
	UBorder* BorderWidget;
	UTextBlock* NameWidget;

	UFUNCTION()
		void SetName(FString Name);
};
