#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HitRequest.h"
#include "ImpactResult.h"
#include "SCAnimNotifyState.h"
#include "DefenseNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UDefenseNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_alName;
    
    UDefenseNotifyState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnHitDefense(const FHitResult& _hitResult, FImpactResult& _Impact, const FHitRequest& _hitRequest, bool& _bShouldDismiss) const;
    
};

