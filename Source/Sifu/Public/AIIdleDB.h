#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ELookAtApplyMode.h"
#include "ESCRotationWay.h"
#include "IdleAnimAndTransition.h"
#include "AIIdleDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIIdleDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIdleAnimAndTransition m_IdleAndExitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCRotationWay m_eSouthRotationWay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanPlayFidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtApplyMode m_eLookAtApplyMode;
    
    UAIIdleDB();
};

