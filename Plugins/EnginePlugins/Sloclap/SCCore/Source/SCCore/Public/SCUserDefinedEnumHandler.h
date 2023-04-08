#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct SCCORE_API FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnum* m_Enum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iDefaultEnumValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName m_Value;
    
public:
    FSCUserDefinedEnumHandler();
};

