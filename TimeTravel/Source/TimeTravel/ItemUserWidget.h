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
	// TSharedRef�� NULL�� �������� ���� ���� ����Ʈ(���۷���)�� SWidget�� ������������ ������ ����ϰ��� �� �� ���ȴ�.
	// NULL�� �������� �����Ƿ�, ������Ʈ�� �����ϰ� ������ �� �־� ����� �ڵ带 �ۼ��ϴµ� ������ �ȴ�.
	// �׻� ��ȿ�ϱ� ������ IsValid() �Լ��� �������� ����.
	// �𸮾� ���۷��������� ���� �����ͺ��ٴ� TSharedRef�� ����ϱ� �����Ѵ�.
	// ����ְų� NULL�� ������ ���۷����� �ʿ��ϴٸ� TSharedPtr�� ����ؾ��Ѵ�.
	virtual TSharedRef<SWidget> RebuildWidget();
	UBorder* BorderWidget;
	UTextBlock* NameWidget;

	UFUNCTION()
		void SetName(FString Name);
};
