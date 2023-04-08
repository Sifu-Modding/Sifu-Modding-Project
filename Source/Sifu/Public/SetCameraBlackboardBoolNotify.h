#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SetCameraBlackboardBoolNotify.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class SIFU_API USetCameraBlackboardBoolNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_blackboardKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bValueToApply;
    
public:
    USetCameraBlackboardBoolNotify();
};

