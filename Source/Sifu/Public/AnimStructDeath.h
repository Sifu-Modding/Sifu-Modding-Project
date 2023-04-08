#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "AnimStructDeath.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructDeath : public FAnimStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bCancelled;
    
    FAnimStructDeath();
};

