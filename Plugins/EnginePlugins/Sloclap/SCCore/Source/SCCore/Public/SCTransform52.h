#pragma once
#include "CoreMinimal.h"
#include "SCLocation48.h"
#include "SCRotation4.h"
#include "SCTransform52.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCTransform52 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSCLocation48 m_Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSCRotation4 m_Rotation;
    
    FSCTransform52();
};

