#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "SCAnimInstance.h"
#include "EOrderType.h"
#include "PlayAnimSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SIFU_API UPlayAnimSubAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_uiSubStateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FAnimContainer m_AnimContainerToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_IKSubInstanceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 m_iSubStateID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 m_uiOrderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float m_fGlobalAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_bIKEnabled;
    
    UPlayAnimSubAnimInstance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetTargetVerticalOffset(float _fVerticalOffet);
    
};

