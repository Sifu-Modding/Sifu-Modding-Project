#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "SCGestureAndBlendProfile.h"
#include "SCUserDefinedEnumHandler.h"
#include "SCConditionnalGestureAndBlendProfile.h"
#include "FidgetDB.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API UFidgetDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_fTimerRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCConditionnalGestureAndBlendProfile> m_Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowSyncFidgetMirrorWithQuadrant;
    
    UFidgetDB();
    UFUNCTION(BlueprintCallable)
    FSCGestureAndBlendProfile BPF_GetGestureContainer(AActor* _requester);
    
    UFUNCTION(BlueprintCallable)
    FSCConditionnalGestureAndBlendProfile BPF_GetConditionnalGestureContainer(AActor* _requester);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_ComputeTimer() const;
    
};

