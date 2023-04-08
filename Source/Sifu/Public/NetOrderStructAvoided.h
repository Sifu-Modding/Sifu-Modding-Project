#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "OrderOverAttackInfo.h"
#include "NetOrderStructAvoided.generated.h"

USTRUCT(BlueprintType)
struct FNetOrderStructAvoided : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrderOverAttackInfo m_AvoidInfo;
    
    SIFU_API FNetOrderStructAvoided();
};

