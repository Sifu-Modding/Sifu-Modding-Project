#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotifyExtraInfo.generated.h"

USTRUCT(BlueprintType)
struct FSCAnimNotifyExtraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iSubAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiTransitionGlobalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiOrderID;
    
    SIFU_API FSCAnimNotifyExtraInfo();
};

