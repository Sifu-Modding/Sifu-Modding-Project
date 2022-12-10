#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EOrderType.h"
#include "ECameraAnimDrivenComputationMethod.h"
#include "AnimDrivenCameraOrderBTService.generated.h"

class UAbstractCameraData;
class UCameraComponentThird;

UCLASS(Abstract, Blueprintable)
class SIFU_API UAnimDrivenCameraOrderBTService : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EOrderType m_eOrderType;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceAsCurrentCamera;
    
    UPROPERTY(EditAnywhere)
    bool m_bWaitForFirstFrameOrderService;
    
    UPROPERTY(EditAnywhere)
    ECameraAnimDrivenComputationMethod m_eComputationMethod;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UCameraComponentThird> m_cameraComponent;
    
public:
    UAnimDrivenCameraOrderBTService();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UAbstractCameraData* GetCameraData() const;
    
};

