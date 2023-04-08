#pragma once
#include "CoreMinimal.h"
#include "PlayerKill.generated.h"

class AFightingPlayerState;

USTRUCT(BlueprintType)
struct SIFU_API FPlayerKill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFightingPlayerState* m_PlayerState;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 m_uiNbKills;
    
    FPlayerKill();
};

