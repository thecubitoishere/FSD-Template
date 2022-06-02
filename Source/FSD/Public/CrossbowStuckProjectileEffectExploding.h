#pragma once
#include "CoreMinimal.h"
#include "CrossbowStuckProjectileEffect.h"
#include "CrossbowStuckProjectileEffectExploding.generated.h"

class UAudioComponent;
class USoundCue;
class UHealthComponentBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCrossbowStuckProjectileEffectExploding : public UCrossbowStuckProjectileEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ChemicalSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* ChemicalAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChemicalReactionDelay;
    
public:
    UCrossbowStuckProjectileEffectExploding();
private:
    UFUNCTION(BlueprintCallable)
    void StartTimeoutTimer(UHealthComponentBase* destroyed);
    
    UFUNCTION(BlueprintCallable)
    void EnableTimeOut();
    
};

