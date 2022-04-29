#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "RevertToNormalDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TerrainModifyingProjectile.generated.h"

class UStaticMesh;
class UTerrainMaterial;

UCLASS(Blueprintable)
class ATerrainModifyingProjectile : public AProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRevertToNormal OnRevertToNormal;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* Terrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* OriginalGroundMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CarveMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CarveMeshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastHitLocation;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Revert;
    
    UPROPERTY(EditAnywhere)
    float TimeOnGround;
    
    UPROPERTY(EditAnywhere)
    float ExpensiveCarveNoise;
    
public:
    ATerrainModifyingProjectile();
    UFUNCTION()
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
};

