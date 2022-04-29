#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HitReactionComponent.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHitReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> HitReactions;
    
    UPROPERTY(EditAnywhere)
    float FirstHitReactBlendIn;
    
    UPROPERTY(EditAnywhere)
    float OverrideHitReactBlendIn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
public:
    UHitReactionComponent();
    UFUNCTION(BlueprintCallable)
    void PlayHitReaction();
    
protected:
    UFUNCTION()
    void OnDamageTaken(float Amount);
    
};
