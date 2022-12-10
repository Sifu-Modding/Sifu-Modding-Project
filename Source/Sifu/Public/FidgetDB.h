#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "SCConditionnalGestureAndBlendProfile.h"
#include "SCUserDefinedEnumHandler.h"
#include "SCGestureAndBlendProfile.h"
#include "FidgetDB.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIFU_API UFidgetDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFloatRange m_fTimerRange;
    
    UPROPERTY(EditAnywhere)
    TArray<FSCConditionnalGestureAndBlendProfile> m_Anims;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowSyncFidgetMirrorWithQuadrant;
    
    UFidgetDB();
    UFUNCTION(BlueprintCallable)
    FSCGestureAndBlendProfile BPF_GetGestureContainer(AActor* _requester);
    
    UFUNCTION(BlueprintCallable)
    FSCConditionnalGestureAndBlendProfile BPF_GetConditionnalGestureContainer(AActor* _requester);
    
    UFUNCTION(BlueprintPure)
    float BPF_ComputeTimer() const;
    
};

