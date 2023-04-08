#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SCUserEnumSetting.generated.h"

class USCUserDefinedEnumBinding;

USTRUCT(BlueprintType)
struct FSCUserEnumSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_Enum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USCUserDefinedEnumBinding> m_Bindings;
    
    SCCORE_API FSCUserEnumSetting();
};

