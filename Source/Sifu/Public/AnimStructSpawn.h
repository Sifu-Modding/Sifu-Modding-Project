#pragma once
#include "CoreMinimal.h"
#include "AnimStructBase.h"
#include "AnimStructSpawn.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FAnimStructSpawn : public FAnimStructBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fPlayRate;
    
public:
    FAnimStructSpawn();
};

