#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "ELookAtApplyMode.h"
#include "Templates/SubclassOf.h"
#include "SCGestureAndBlendProfile.generated.h"

class UBlendProfilePayload;

USTRUCT(BlueprintType)
struct SCCORE_API FSCGestureAndBlendProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_GesturesAnimContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseBlendProfilePayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GestureBlendProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBlendProfilePayload> m_BlendProfilePayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowSyncFidgetMirrorWithQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtApplyMode m_eLookAtApplyMode;
    
    FSCGestureAndBlendProfile();
};

