// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TimeTravelCharacter.generated.h"

UCLASS(config=Game)
class ATimeTravelCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	ATimeTravelCharacter();

	virtual void Tick(float flDeltaTime) override;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
		TSubclassOf<class ASword> SwordClass;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = Health)
		float PlayerHP;

	UPROPERTY(config, EditAnyWhere, BlueprintReadWrite, Category = Health)
		float MaxHP;

	UFUNCTION(BlueprintCallable, Category = "BpCalled")
	void StartAttack();

	void StopAttack();

	int32 ComboNumber;

	float IsAction1;
	float IsAction2;
	float IsAction3;
	float IsAction4;

	ASword* DefaultWeapon;

	float BPUpDownValue;
	float BPLeftRightValue;

	UFUNCTION(BlueprintCallable, Category = "BPCalled")
		void BPUpDown(float Value);

	UFUNCTION(BlueprintCallable, Category = "BPCalled")
		void BPLeftRight(float Value);

	UPROPERTY(EditDefaultsOnly, Category = "Armor")
		TSubclassOf<class AArmor> ArmorClass;		// TSubclassOf 템플릿을 사용하여 AArmor의 파생 클래스만 할당할 수 있으며, 선택지를 제한시킬 수 있다.

	UFUNCTION(BlueprintCallable, Category = "BPCalled")
		void PutOnArmor();

	UFUNCTION(BlueprintCallable, Category = "BPCalled")
		void TakeOffArmor();

protected:

	virtual void BeginPlay() override;

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	void SpawnDefaultInventory();

	float m_flUpDownValue;

	float m_flLeftRightValue;

	void UpDown(float flValue);

	void LeftRight(float flValue);

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* AttackAnim1;

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* AttackAnim2;

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* AttackAnim3;

	UPROPERTY(EditDefaultsOnly, Category = Pawn)
		UAnimMontage* AttackAnim4;

	UPROPERTY(EditDefaultsOnly, Category = "Sound")
		class USoundCue* SoundAttack;

	UPROPERTY(EditDefaultsOnly, Category = "FX")
		TArray<UParticleSystem*> AttackFX;

	UPROPERTY(Transient)		// 휘발성, 디스크에 저장, 로드되지 않고 지속되지 않는 파생값으로 지정
		UParticleSystemComponent* AttackFXComp;

	float AnimDuration;

	class AArmor* DefaultArmor;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

