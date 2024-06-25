// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitboxActor.generated.h"

UENUM(BlueprintType)
enum class EHitboxEnum : uint8
{
	HB_PROXIMITY	UMETA(DisplayName = "Proximity"), // When the attack is being released, determines what will happen on contact depending on what emeny player does.
	HB_STRIKE		UMETA(DisplayName = "Strike"),	  // When the attack has collided with the enemy.
	HB_HURTBOX		UMETA(DisplayName = "Hurtbox")    // Collision for characters, attacks hit the hurtbox to deal damage.
};

UCLASS()
class FIGHTINGGAME_API AHitboxActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHitboxActor();

	// Notify the HitboxActorBP class instance that the hitbox is ready to be drawn.
	UFUNCTION(BlueprintCallable)
		void TriggerVisualizeHitBox();

	// Draw the hitbox to the screen to visualize it (it this is a debug setting or training mode).
	UFUNCTION(BlueprintImplementableEvent)
		void VisualizeHitbox();

	// The damage the hitbox will do.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
		float hitboxDamage;

	// The hitbox Enum instance.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
		EHitboxEnum hitboxType;

	// The location to spawn the hitbox.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
		FVector hitboxLocation;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
