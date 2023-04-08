#pragma once
#include "CoreMinimal.h"
#include "SoundStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FSoundStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 m_uiStateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool m_bReplicates;
    
    SIFU_API FSoundStateInfo();
};

