// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"						// 기본적인 기능을 사용하기 위한 헤더
#include "GameFramework/Character.h"			// 캐릭터를 상속받기 위한 헤더
#include "RobotCharacter.generated.h"			// 언리얼 에디터에서 소스코드가 컴파일 되기 이전, 소스 코드를 분석해서 에디터에서 표현하기 위해 필요한 정보들이 저장되어 있는 헤더파일. (리플렉션 기술)

UCLASS()		// 코드가 컴파일 되기 전에 코드를 이 매크로 다음줄에 오는 것은 클래스로 판단.
class TIMETRAVEL_API ARobotCharacter : public ACharacter
{
	GENERATED_BODY()			// 클래스 몸체를 정의하는 매크로로, 언리얼 도큐먼트에 따르면 반드시 클래스 정의 첫번째 줄에 위치되어야 한다고 설명됨.

public:
	// Sets default values for this character's properties
	ARobotCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float flDamage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;		// 실제 적용된 데미지 값, 데미지 타입, 데미지를 입히는 컨트롤러, 데미지를 주는 액터

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Health)
		float RobotHP;
};
