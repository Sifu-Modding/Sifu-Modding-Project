#pragma once
#include "CoreMinimal.h"
#include "ESCRotationWay.h"
#include "Engine/DataAsset.h"
#include "IdleAnimAndTransition.h"
#include "ELookAtApplyMode.h"
#include "AIIdleDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UAIIdleDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIdleAnimAndTransition m_IdleAndExitAnimation;
    
    UPROPERTY(VisibleAnywhere)
    ESCRotationWay m_eSouthRotationWay;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanPlayFidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELookAtApplyMode m_eLookAtApplyMode;
    
    UAIIdleDB();
};

