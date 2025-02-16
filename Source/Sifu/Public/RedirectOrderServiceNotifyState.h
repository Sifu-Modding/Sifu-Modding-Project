#pragma once
#include "CoreMinimal.h"
#include "ESCRotationWay.h"
#include "OrderServiceNotifyState.h"
#include "RedirectOrderServiceNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API URedirectOrderServiceNotifyState : public UOrderServiceNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseAnimRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCRotationWay m_eRootMotionRotWay;
    
public:
    URedirectOrderServiceNotifyState();

};

