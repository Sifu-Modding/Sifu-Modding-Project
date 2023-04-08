#pragma once
#include "CoreMinimal.h"
#include "SCScale48.h"
#include "SCTransform52.h"
#include "SCTransform100.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCTransform100 : public FSCTransform52 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSCScale48 m_Scale3D;
    
    FSCTransform100();
};

