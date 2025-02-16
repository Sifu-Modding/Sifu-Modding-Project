#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESCCardinalPoints.h"
#include "HitBox.h"
#include "PushAnims.h"
#include "PushTraversalAnimContainer.h"
#include "TraversalInfo.h"
#include "PushConfiguration.generated.h"

class AFightingCharacter;
class UBaseEnvironmentalInteractionComponent;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UPushConfiguration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPushEnvRedirectionLimitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fExpectedSnapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLandingDistanceFromFloorToConsidereFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDistanceFromEdgeToTestFloorHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFloorSearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHeightSearchDistanceOnNormal;
    
    UPushConfiguration();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetPushCloseTraversalAnimations(const FTraversalInfo& _request, ESCCardinalPoints _eCardinalPoint, AFightingCharacter* _Instigator, AFightingCharacter* _victim, FPushTraversalAnimContainer& _outOnVoidResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_GetPushCloseAnimOnTraversal(AFightingCharacter* _Instigator, AFightingCharacter* _victim, const FTraversalInfo& _traversalInfo, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_GetPushCloseAnimOnImpactHeight(AFightingCharacter* _Instigator, AFightingCharacter* _victim, float _fHeight, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetPushCloseAnimOnEnv(AFightingCharacter* _Instigator, AFightingCharacter* _victim, UBaseEnvironmentalInteractionComponent* _env, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap, FHitBox& _hit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetPushAnims(AFightingCharacter* _Instigator, AFightingCharacter* _victim, FPushAnims& _outAnims, FPushAnims& _outAnimsClose, bool& _bGrabberShouldSnap) const;
    
};

