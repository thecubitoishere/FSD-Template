#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimatedItem.h"
#include "UObject/NoExportTypes.h"
#include "CalldownItem.generated.h"

class AActor;
class UItemPlacerAggregator;
class ARessuplyPod;
class UResourceData;

UCLASS(Blueprintable)
class ACalldownItem : public AAnimatedItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemPlacerAggregator> ItemPlacerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARessuplyPod> SupplyPodClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* ResouceRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OrderDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LogText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ResupplyBeacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UItemPlacerAggregator* ItemPlacerInstance;
    
    UPROPERTY(EditAnywhere)
    float CoolDown;
    
    UPROPERTY(EditAnywhere, Transient)
    float CooldownRemaining;
    
public:
    ACalldownItem();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Call_Resupply(const FVector& Location);
    
};

