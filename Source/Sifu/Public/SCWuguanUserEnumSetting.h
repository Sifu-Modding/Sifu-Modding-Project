#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SCWuguanUserEnumSetting.generated.h"

class USCUserDefinedEnumBinding;

USTRUCT(BlueprintType)
struct FSCWuguanUserEnumSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_Enum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USCUserDefinedEnumBinding> m_Bindings;
    
    SIFU_API FSCWuguanUserEnumSetting();
};

