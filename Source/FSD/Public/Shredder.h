#pragma once
#include "CoreMinimal.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "Shredder.generated.h"

class AActor;

UCLASS(Blueprintable)
class AShredder : public AEnemyDeepPathfinderCharacter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float FoldoutRange;
    
    UPROPERTY(EditAnywhere)
    float SpinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
public:
    AShredder();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

