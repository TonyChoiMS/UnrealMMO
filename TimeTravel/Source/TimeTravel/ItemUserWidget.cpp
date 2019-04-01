// Fill out your copyright notice in the Description page of Project Settings.

#include "ItemUserWidget.h"

TSharedRef<SWidget> UItemUserWidget::RebuildWidget()
{
	UPanelWidget* RootWidget = Cast<UPanelWidget>(GetRootWidget());

	if (!RootWidget)
	{
		// ĵ���� �г��� ���ٸ� ĵ�����г��� ����
		// RootWidget�� �������Ʈ���� ���� Canvas Panel�� �Ǵ°�.
		RootWidget = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), (TEXT("Root")));
		WidgetTree->RootWidget = RootWidget;		// WidgetTree �������� �����ϴ� Ŭ���� 
	}

	if (RootWidget && WidgetTree)
	{
		// BorderWidget�� TextWidget ����
		BorderWidget = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), (TEXT("Border")));
		NameWidget = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), (TEXT("Name")));

		// ĵ���� �гο� BorderWidget�� �ڽ����� �����ϰ�, TextWidget�� BorderWidget�� �ڽ����� �����Ѵ�.
		RootWidget->AddChild(BorderWidget);
		BorderWidget->AddChild(NameWidget);

		// BorderWidget�� ������ �����ٰ� ĵ���� �гο� ����ȯ
		UCanvasPanelSlot* BorderSlot = Cast<UCanvasPanelSlot>(BorderWidget->Slot);
		// ������ ����
		BorderSlot->SetSize(FVector2D(100, 30));
		// ���� ���� (RGBA)
		FLinearColor BorderColor(0.f, 0.f, 0.f, 0.2f);
		BorderWidget->SetBrushColor(BorderColor);
		// Padding ���� (�����¿�)
		FMargin Padding(10.f, 4.f, 10.f, 4.f);
		BorderWidget->SetPadding(Padding);
	}

	// �θ��� �Ӽ��� ������ �� ������ ����
	TSharedRef<SWidget> Widget = Super::RebuildWidget();
	return Widget;
}

void UItemUserWidget::SetName(FString Name)
{
	NameWidget->SetText(FText::FromString(Name));
}
