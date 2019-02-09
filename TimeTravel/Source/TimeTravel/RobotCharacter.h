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

	// 멤버함수는 UFUNCTION 매크로로 지정해줘야한다.
	// 플레이어를 폰으로 가져오기 위해 파라미터에 폰을 지정
	UFUNCTION()
		void OnSeePlayer(APawn* Pawn);

	void LookingForOverlapActor();

	UFUNCTION()
		void OnMeleeCompBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float flDamage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;		// 실제 적용된 데미지 값, 데미지 타입, 데미지를 입히는 컨트롤러, 데미지를 주는 액터

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Health)
		float RobotHP;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
		class UBehaviorTree* BotBehavior;

	UPROPERTY(VisibleAnywhere, Category = "AI")
		class UPawnSensingComponent* PawnSensingComp;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
		UAnimMontage* MeleeAnimMontage;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
		UAnimMontage* TakeHitAnimMontage;

	UPROPERTY(VisibleAnywhere, Category = "AI")
		UCapsuleComponent* MeleeCollisionComp;

	float LastSeenTime;
	bool bSensedTarget;

	UFUNCTION(BlueprintCallable, Category = "AI")
		void ExecuteMeleeDamage(AActor* HitActor);

	virtual void OnHit(float DamageTaken, struct FDamageEvent const& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser);

	virtual void Die(float KillingDamage, struct FDamageEvent const& DamageEvent, AController* Killer, AActor* DamageCauser);

	void SetRagdollPhysics();
};
