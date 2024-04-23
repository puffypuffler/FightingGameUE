// Copyright Epic Games, Inc. All Rights Reserved.

#include "FightingGameCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AFightingGameCharacter::AFightingGameCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f,180.f,0.f));

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	playerHealth = 1.00f;
}

//////////////////////////////////////////////////////////////////////////
// Input

void AFightingGameCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFightingGameCharacter::MoveRight);

	// Bindings for basic attacks.
	PlayerInputComponent->BindAction("Attack1", IE_Pressed, this, &AFightingGameCharacter::StartAttack1);
	PlayerInputComponent->BindAction("Attack2", IE_Pressed, this, &AFightingGameCharacter::StartAttack2);
	PlayerInputComponent->BindAction("Attack3", IE_Pressed, this, &AFightingGameCharacter::StartAttack3);
	PlayerInputComponent->BindAction("Attack4", IE_Pressed, this, &AFightingGameCharacter::StartAttack4);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &AFightingGameCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AFightingGameCharacter::TouchStopped);
}

void AFightingGameCharacter::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f,-1.f,0.f), Value);
}

void AFightingGameCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void AFightingGameCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

/////// Basic attack buttons. ///////
void AFightingGameCharacter::StartAttack1()
{
	UE_LOG(LogTemp, Warning, TEXT("Using Attack1."));
}

void AFightingGameCharacter::StartAttack2()
{
	UE_LOG(LogTemp, Warning, TEXT("Using Attack2."));
}

void AFightingGameCharacter::StartAttack3()
{
	UE_LOG(LogTemp, Warning, TEXT("Using Attack3."));
}

void AFightingGameCharacter::StartAttack4()
{
	UE_LOG(LogTemp, Warning, TEXT("Using Attack4."));
	TakeDamage(0.05f);
}
/////// End of basic attack buttons. ///////

// Player damage and health.
void AFightingGameCharacter::TakeDamage(float damageAmount)
{
	// Subtract health when character takes damage.
	UE_LOG(LogTemp, Warning, TEXT("Taking dmg for %f points."), damageAmount);
	playerHealth -= damageAmount;

	// Set health to 0 in case it goes negative.
	if (playerHealth < 0.00f)
	{
		playerHealth = 0.00f;
	}
}

