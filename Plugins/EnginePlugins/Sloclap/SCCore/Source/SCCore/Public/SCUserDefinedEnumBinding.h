#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCUserDefinedEnumBinding.generated.h"

class UEnum;

UCLASS(Blueprintable)
class SCCORE_API USCUserDefinedEnumBinding : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* m_CppEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* m_BPEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> m_CppToBPBinding;
    
    USCUserDefinedEnumBinding();
};

