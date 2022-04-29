#pragma once
#include "CoreMinimal.h"
#include "EPawnStatType.h"
#include "Engine/DataAsset.h"
#include "PawnStat.generated.h"

UCLASS(Blueprintable)
class UPawnStat : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float StartingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnStatType PawnStatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPawnStatType ValueModificationType;
    
public:
    UPawnStat();
};

