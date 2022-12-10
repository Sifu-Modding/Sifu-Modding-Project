#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SCWuguanUserEnumSetting.generated.h"

class USCUserDefinedEnumBinding;

USTRUCT(BlueprintType)
struct FSCWuguanUserEnumSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftObjectPath m_Enum;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<USCUserDefinedEnumBinding> m_Bindings;
    
    SIFU_API FSCWuguanUserEnumSetting();
};

