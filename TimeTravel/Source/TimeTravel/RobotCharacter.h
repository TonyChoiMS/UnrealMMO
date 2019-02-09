// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"						// �⺻���� ����� ����ϱ� ���� ���
#include "GameFramework/Character.h"			// ĳ���͸� ��ӹޱ� ���� ���
#include "RobotCharacter.generated.h"			// �𸮾� �����Ϳ��� �ҽ��ڵ尡 ������ �Ǳ� ����, �ҽ� �ڵ带 �м��ؼ� �����Ϳ��� ǥ���ϱ� ���� �ʿ��� �������� ����Ǿ� �ִ� �������. (���÷��� ���)

UCLASS()		// �ڵ尡 ������ �Ǳ� ���� �ڵ带 �� ��ũ�� �����ٿ� ���� ���� Ŭ������ �Ǵ�.
class TIMETRAVEL_API ARobotCharacter : public ACharacter
{
	GENERATED_BODY()			// Ŭ���� ��ü�� �����ϴ� ��ũ�η�, �𸮾� ��ť��Ʈ�� ������ �ݵ�� Ŭ���� ���� ù��° �ٿ� ��ġ�Ǿ�� �Ѵٰ� �����.

public:
	// Sets default values for this character's properties
	ARobotCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// ����Լ��� UFUNCTION ��ũ�η� ����������Ѵ�.
	// �÷��̾ ������ �������� ���� �Ķ���Ϳ� ���� ����
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

	virtual float TakeDamage(float flDamage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;		// ���� ����� ������ ��, ������ Ÿ��, �������� ������ ��Ʈ�ѷ�, �������� �ִ� ����

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
