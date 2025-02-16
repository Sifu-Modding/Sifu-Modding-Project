#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "ESimpleAxis.h"
#include "ESimpleAxisSide.h"
#include "ETraversalEntryType.h"
#include "Templates/SubclassOf.h"
#include "TraversalAxisConstraint.h"
#include "TraversalComponentMargin.h"
#include "TraversalComponent.generated.h"

class AActor;
class UNavArea;
class UTraversalComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UTraversalComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTraversalUsageDelegate, UTraversalComponent*, _traversalComponent);
    DECLARE_DYNAMIC_DELEGATE_RetVal(FVector, FTraversalPointDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraversalUsageDelegate m_OnStartBeingUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraversalUsageDelegate m_OnStopBeingUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraversalPointDelegate OnGetCinematicEndPoint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_traversalWaitTimePerCombatRole[4];
    
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
    TArray<FTraversalAxisConstraint> m_traversalAxisConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimpleAxis m_eForbiddenAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimpleAxisSide m_eAuthorizedAxisSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseEntryMaxDistFromTraversalCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEntryMaxDistFromTraversalCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraversalComponentMargin m_EntryMargin_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraversalComponentMargin m_EntryMargin_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLengthBetweenTwoNavLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_AllowedEntryTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsLethal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> m_cinematicNavAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseMeshAsTraversalCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseRushInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceUseAnimDrivenCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceDisplayHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCustomNavLinkCooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNavLinkCooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseClimbUIForCine;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> m_ActorsWithReferencedInNavLinkComponent;
    
public:
    UTraversalComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ComputeTraversalAIInfo();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetTraversalActive(bool _bActive, bool _bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsTraversalActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsEntryTypeAllowed(ETraversalEntryType _eEntryType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAnimDrivenCameraForced() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_StartBeingUsed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_EndBeingUsed();
    
};

