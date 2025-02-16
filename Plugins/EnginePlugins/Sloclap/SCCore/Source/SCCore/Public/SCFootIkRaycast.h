#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SCFootIkService.h"
#include "SCFootIkRaycast.generated.h"

class USCFootIkAnimInstance;

UCLASS(Blueprintable)
class SCCORE_API USCFootIkRaycast : public USCFootIkService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTraceUpLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTraceDownLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_eCollisionChannel;
    
public:
    USCFootIkRaycast();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoRaycast(FHitResult& _outHitResult, USCFootIkAnimInstance* _footAnimInstance, const FVector& _vStart, const FVector& _vEnd) const;
    
};

