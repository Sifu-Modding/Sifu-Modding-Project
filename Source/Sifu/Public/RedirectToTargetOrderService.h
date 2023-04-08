#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESCRotationWay.h"
#include "BPOrderServiceInstance.h"
#include "EOrientationApplyMethod.h"
#include "ERedirectToTargetOrigin.h"
#include "OrderService.h"
#include "Templates/SubclassOf.h"
#include "RedirectToTargetOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API URedirectToTargetOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOrderService> m_StartAfterTargetService;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseAnimRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bApplyEvenIfNoRootRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceAnimRotationWay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCRotationWay m_eRootRotationWay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseTargetableActorComponentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWantLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseFakeDirIfNoTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInvertDirOnBackQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRedirectFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxAngleFromTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxAngleFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERedirectToTargetOrigin m_eRedirectionOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrientationApplyMethod m_eOrientationApplyMethod;
    
    URedirectToTargetOrderService();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BPF_GetRedirectionOrigin(const FVector& _target, const FBPOrderServiceInstance& _instance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector BPE_GetTarget(const FBPOrderServiceInstance& _instance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_GetMaxAngularSpeed(const FBPOrderServiceInstance& _instance) const;
    
};

