#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CameraTransitionEventStruct.h"
#include "EUpdateAngleMode.h"
#include "Templates/SubclassOf.h"
#include "CameraTransitionInfo.generated.h"

class UCameraTransitionModule;
class UCurveFloat;

UCLASS(Blueprintable)
class SIFU_API UCameraTransitionInfo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurveForAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFreezeUnderneathTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWantUseAngleFromStartNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpdateAngleMode m_eUpdateAngleMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCameraTransitionModule>> m_Modules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraTransitionEventStruct> m_events;
    
public:
    UCameraTransitionInfo();
};

