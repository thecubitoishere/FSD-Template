#pragma once
#include "CoreMinimal.h"
#include "FormationData.h"
#include "GroundFormationData.generated.h"

UCLASS(Blueprintable)
class UGroundFormationData : public UFormationData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FormationSize;
    
    UPROPERTY(EditAnywhere)
    float FormationSpread;
    
    UPROPERTY(EditAnywhere)
    float RandomSpread;
    
public:
    UGroundFormationData();
};

