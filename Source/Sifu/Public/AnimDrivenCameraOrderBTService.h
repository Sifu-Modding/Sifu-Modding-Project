#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ECameraAnimDrivenComputationMethod.h"
#include "EOrderType.h"
#include "AnimDrivenCameraOrderBTService.generated.h"

class UAbstractCameraData;
class UCameraComponentThird;

UCLASS(Abstract, Blueprintable)
class SIFU_API UAnimDrivenCameraOrderBTService : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceAsCurrentCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWaitForFirstFrameOrderService;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraAnimDrivenComputationMethod m_eComputationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCameraComponentThird> m_cameraComponent;
    
public:
    UAnimDrivenCameraOrderBTService();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAbstractCameraData* GetCameraData() const;
    
};

