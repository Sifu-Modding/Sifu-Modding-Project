#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ESCSignificanceBuckets.h"
#include "FootStepAnimNotify.generated.h"

class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class SIFU_API UFootStepAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Foot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_eChannel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTraceComplex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRaycastOffsetUp;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRaycastOffsetDown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCSignificanceBuckets m_eMinSignifiance;
    
public:
    UFootStepAnimNotify();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_SetFoot(FName _Foot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_NotifyFootStep(USkeletalMeshComponent* _meshComp, uint8 _surface, FName _footName, FHitResult _hitResult) const;
    
};

