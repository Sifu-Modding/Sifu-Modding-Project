#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimContainer.h"
#include "ESimpleAxis.h"
#include "SCActor.h"
#include "TraversalActor.generated.h"

UCLASS(Blueprintable)
class SIFU_API ATraversalActor : public ASCActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTraversalActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideTraversalEntryAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTraversalEntryAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideTraversalExitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTraversalExitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vBoxExtentAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vBoxExtentForbidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasForbiddenTraversalPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimpleAxis m_eForbiddenAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseEntryMaxDistFromTraversalCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEntryMaxDistFromTraversalCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLengthBetweenTwoNavLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNavLinkOffsetFromBoxExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_AllowedEntryTypes;
    
public:
    ATraversalActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector BPE_GetTraversalEndPos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GetTraversalAnimation(FAnimContainer& _outResult) const;
    
};

