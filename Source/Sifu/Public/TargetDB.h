#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/DataAsset.h"
#include "Engine/EngineTypes.h"
#include "EActionType.h"
#include "EMoveStatus.h"
#include "Templates/SubclassOf.h"
#include "TargetDB.generated.h"

class UCurveFloat;
class UTargetSettingsDB;

UCLASS(Blueprintable)
class SIFU_API UTargetDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_eTargetVisibleCollisionChannel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiFightingAiBehaviorMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTargetVisibleTraceVerticalDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer m_TargetVisibleCollisionContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EActionType> m_PriorityWithoutTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EActionType> m_PriorityWithSameTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EActionType> m_PriorityWithDifferentTarget;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_aUseTargetingReaction[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveStatus m_MoveStatusOutOfFightRange[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveStatus m_MoveStatusInFightRange[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_MaxZDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTargetMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EActionType, TSubclassOf<UTargetSettingsDB>> m_Settings;
    
    UTargetDB();

};

