#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SavableDataAsset.h"
#include "TrackedStatInfo.h"
#include "ChallengeVariation.h"
#include "UObject/NoExportTypes.h"
#include "SeasonChallenge.generated.h"

class UTexture2D;
class USeasonChallenge;
class UCampaign;

UCLASS(Blueprintable)
class USeasonChallenge : public USavableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChallengeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> IconOutlined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrackedStatInfo> TrackedStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChallengeVariation> Variations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChallengeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpecialChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxOccurences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USeasonChallenge* ChallengeAfterMaxOccurences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCampaign>> RequiredCampaigns;
    
    USeasonChallenge();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIconOutlined();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIcon();
    
};

