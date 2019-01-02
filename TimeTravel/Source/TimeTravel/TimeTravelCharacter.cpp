// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TimeTravelCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Sword.h"

//////////////////////////////////////////////////////////////////////////
// ATimeTravelCharacter

ATimeTravelCharacter::ATimeTravelCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = false; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 900.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = false; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	MaxHP = 100.f;

	ComboNumber = 0.f;
}

void ATimeTravelCharacter::BeginPlay()
{
	Super::BeginPlay();

	SpawnDefaultInventory();

	PlayerHP = MaxHP;
}

void ATimeTravelCharacter::Tick(float flDeltaTime)
{
	Super::Tick(flDeltaTime);

	FRotator MakeRotator = this->GetActorRotation() + FRotator(m_flUpDownValue, m_flLeftRightValue, 0.0f);

	if (m_flUpDownValue != 0.0f || m_flLeftRightValue != 0.0f)
	{
		Controller->SetControlRotation(MakeRotator);

		AddMovementInput(GetActorForwardVector(), m_flUpDownValue);
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void ATimeTravelCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &ATimeTravelCharacter::StartAttack);

	/*PlayerInputComponent->BindAxis("MoveForward", this, &ATimeTravelCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATimeTravelCharacter::MoveRight);*/
	PlayerInputComponent->BindAxis("UpDown", this, &ATimeTravelCharacter::UpDown);
	PlayerInputComponent->BindAxis("LeftRight", this, &ATimeTravelCharacter::LeftRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	/*PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ATimeTravelCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ATimeTravelCharacter::LookUpAtRate);*/

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ATimeTravelCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ATimeTravelCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ATimeTravelCharacter::OnResetVR);
}


void ATimeTravelCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ATimeTravelCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ATimeTravelCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ATimeTravelCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ATimeTravelCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ATimeTravelCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ATimeTravelCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void ATimeTravelCharacter::SpawnDefaultInventory()
{
	FActorSpawnParameters SpawnInfo;

	ASword* DefaultWeapon = GetWorld()->SpawnActor<ASword>(SwordClass, SpawnInfo);

	DefaultWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, "WeaponSocket");
}

void ATimeTravelCharacter::UpDown(float flValue)
{
	m_flUpDownValue = flValue;
}

void ATimeTravelCharacter::LeftRight(float flValue)
{
	m_flLeftRightValue = flValue;
}

void ATimeTravelCharacter::StartAttack()
{
	FTimerHandle TimerHandle_StopAttack;

	if (ComboNumber == 0)
	{
		float AnimDuration = PlayAnimMontage(AttackAnim1);
		ComboNumber = 1;
		GetWorldTimerManager().SetTimer(TimerHandle_StopAttack, this, &ATimeTravelCharacter::StopAttack, AnimDuration, false);
	}
	else if (ComboNumber == 1)
	{
		float AnimDuration = PlayAnimMontage(AttackAnim2);
		ComboNumber = 2;
		GetWorldTimerManager().SetTimer(TimerHandle_StopAttack, this, &ATimeTravelCharacter::StopAttack, AnimDuration, false);
	}
	else if (ComboNumber == 2)
	{
		float AnimDuration = PlayAnimMontage(AttackAnim3);
		ComboNumber = 3;
		GetWorldTimerManager().SetTimer(TimerHandle_StopAttack, this, &ATimeTravelCharacter::StopAttack, AnimDuration, false);
	}
	else if (ComboNumber == 3)
	{
		float AnimDuration = PlayAnimMontage(AttackAnim4);
		ComboNumber = 0;
		GetWorldTimerManager().SetTimer(TimerHandle_StopAttack, this, &ATimeTravelCharacter::StopAttack, AnimDuration, false);
	}
}

void ATimeTravelCharacter::StopAttack()
{
	float IsAction1 = GetMesh()->AnimScriptInstance->Montage_GetPlayRate(AttackAnim1);
	float IsAction2 = GetMesh()->AnimScriptInstance->Montage_GetPlayRate(AttackAnim2);
	float IsAction3 = GetMesh()->AnimScriptInstance->Montage_GetPlayRate(AttackAnim3);
	float IsAction4 = GetMesh()->AnimScriptInstance->Montage_GetPlayRate(AttackAnim4);

	if (IsAction1 == 0 && IsAction2 == 0 && IsAction3 == 0 && IsAction4 == 0)
	{
		ComboNumber = 0;
	}
}