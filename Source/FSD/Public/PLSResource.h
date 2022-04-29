#pragma once
#include "CoreMinimal.h"
#include "PLSResource.generated.h"

class UResourceData;

USTRUCT(BlueprintType)
struct FPLSResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    float AmountToGenerate;
    
    FSD_API FPLSResource();
};

