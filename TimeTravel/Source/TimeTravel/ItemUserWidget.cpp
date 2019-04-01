// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemUserWidget.h"

TSharedRef<SWidget> UItemUserWidget::RebuildWidget()
{
	UPanelWidget* RootWidget = Cast<UPanelWidget>(GetRootWidget());

	if (!RootWidget)
	{
		// 캔버스 패널이 없다면 캔버스패널을 생성
		// RootWidget이 블루프린트에서 보던 Canvas Panel이 되는것.
		RootWidget = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), (TEXT("Root")));
		WidgetTree->RootWidget = RootWidget;		// WidgetTree 위젯들을 관리하는 클래스 
	}

	if (RootWidget && WidgetTree)
	{
		// BorderWidget과 TextWidget 생성
		BorderWidget = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), (TEXT("Border")));
		NameWidget = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), (TEXT("Name")));

		// 캔버스 패널에 BorderWidget을 자식으로 설정하고, TextWidget은 BorderWidget의 자식으로 설정한다.
		RootWidget->AddChild(BorderWidget);
		BorderWidget->AddChild(NameWidget);

		// BorderWidget의 슬롯을 가져다가 캔버스 패널에 형변환
		UCanvasPanelSlot* BorderSlot = Cast<UCanvasPanelSlot>(BorderWidget->Slot);
		// 사이즈 설정
		BorderSlot->SetSize(FVector2D(100, 30));
		// 색상 설정 (RGBA)
		FLinearColor BorderColor(0.f, 0.f, 0.f, 0.2f);
		BorderWidget->SetBrushColor(BorderColor);
		// Padding 설정 (상하좌우)
		FMargin Padding(10.f, 4.f, 10.f, 4.f);
		BorderWidget->SetPadding(Padding);
	}

	// 부모의 속성을 가져온 후 위젯을 리턴
	TSharedRef<SWidget> Widget = Super::RebuildWidget();
	return Widget;
}

void UItemUserWidget::SetName(FString Name)
{
	NameWidget->SetText(FText::FromString(Name));
}
