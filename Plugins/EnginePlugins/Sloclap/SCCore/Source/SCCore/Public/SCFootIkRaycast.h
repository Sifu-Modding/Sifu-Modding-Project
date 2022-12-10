#pragma once
#include "CoreMinimal.h"
#include "SCFootIkService.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SCFootIkRaycast.generated.h"

class USCFootIkAnimInstance;

UCLASS(BlueprintType)
class SCCORE_API USCFootIkRaycast : public USCFootIkService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fTraceUpLength;
    
    UPROPERTY(EditAnywhere)
    float m_fTraceDownLength;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_eCollisionChannel;
    
public:
    USCFootIkRaycast();
    UFUNCTION(BlueprintPure)
    bool DoRaycast(FHitResult& _outHitResult, USCFootIkAnimInstance* _footAnimInstance, const FVector& _vStart, const FVector& _vEnd) const;
    
};

