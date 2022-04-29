#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FootStepNotifyTarget.h"
#include "ECharacterState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GliderAnimSync.h"
#include "ECharacterMoveDirection.h"
#include "PlayerAnimInstance.generated.h"

class UItemCharacterAnimationSet;
class APlayerCharacter;
class USoundCue;
class UParticleSystem;
class UAnimMontage;
class UUseAnimationSetting;

UCLASS(Blueprintable, NonTransient)
class UPlayerAnimInstance : public UAnimInstance, public IFootStepNotifyTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstPerson;
    
    UPROPERTY(EditAnywhere)
    float WalkTreshhold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DefaultFootstepParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DefaultFootStepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* AnimationSetA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* AnimationSetB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AnimationSetAIsPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECharacterState CharacterState;
    
    UPROPERTY(EditAnywhere, Transient)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    float WalkAnimationSpeed;
    
    UPROPERTY(EditAnywhere)
    float RunAnimationSpeed;
    
    UPROPERTY(EditAnywhere, Transient)
    float WalkRate;
    
    UPROPERTY(EditAnywhere, Transient)
    float RunRate;
    
    UPROPERTY(EditAnywhere, Transient)
    float Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator AimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInitialized;
    
    UPROPERTY(EditAnywhere, Transient)
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsStandingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsLyingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool OnZipline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsGrinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsParalyzed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsGrabbed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool BeingRevived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsLookingAtMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsControllingEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsUsingTraversalTool;
    
    UPROPERTY(EditAnywhere, Transient)
    float TraversalToolTargetHorizontalOffset;
    
    UPROPERTY(EditAnywhere, Transient)
    float TraversalToolTargetVerticalOffset;
    
    UPROPERTY(EditAnywhere, Transient)
    float TraversalToolSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ControllingEnemyRootOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ControllingEnemyDirectionAlpha;
    
    UPROPERTY(EditAnywhere)
    float GliderAnimationLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGliderAnimSync GliderAnimSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAllowedToPlayMovementAnim;
    
    UPROPERTY(EditAnywhere, Transient)
    float CropBeard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* ActiveUseMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUseAnimationSetting* CurrentUseSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndUseMontageToPlay;
    
    UPROPERTY(EditAnywhere)
    float AimDuration;
    
    UPROPERTY(EditAnywhere)
    float ReviveProgress;
    
    UPROPERTY(EditAnywhere)
    float ReviveExplicitTime;
    
    UPROPERTY(EditAnywhere)
    float IdleTimeForInspect;
    
    UPROPERTY(EditAnywhere)
    float RepeatDealayForInspect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECharacterMoveDirection CharacterMoveDirection;
    
    UPROPERTY(EditAnywhere, Transient)
    float MoveAdjustmentAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* CarryAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemCharacterAnimationSet* DefaultAnimationSet;
    
public:
    UPlayerAnimInstance();
    UFUNCTION(BlueprintCallable)
    bool StopUseMontage(bool stopImmediately);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopInspectWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartInspectWeapon();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAiming();
    
    UFUNCTION(BlueprintCallable)
    void PlayUseMontages(UUseAnimationSetting* useSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMontageInGroup(FName GroupName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemCharacterAnimationSet* GetAnimationSet() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float CalculateDirectionVertical(const FVector& TargetDirection, const FRotator& BaseRotation) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

