#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "AnimStructOverride.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructOverride : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iAnimIndex;
    
    FAnimStructOverride();
};

