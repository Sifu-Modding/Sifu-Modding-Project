#pragma once
#include "CoreMinimal.h"
#include "CustomWidgetNavigationData.generated.h"

USTRUCT(BlueprintType)
struct FCustomWidgetNavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAnalogNavigation;
    
    SIFU_API FCustomWidgetNavigationData();
};

