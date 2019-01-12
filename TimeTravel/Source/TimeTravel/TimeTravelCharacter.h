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

	void StartAttack();

	void StopAttack();

	int32 ComboNumber;


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


	float m_flAnimDuration;
	float m_flIsAction1;
	float m_flIsAction2;
	float m_flIsAction3;
	float m_flIsAction4;

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

