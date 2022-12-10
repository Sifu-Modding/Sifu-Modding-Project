#pragma once
#include "CoreMinimal.h"
#include "SCBaseGameSettings.h"
#include "Engine/DataTable.h"
#include "SCWuguanUserEnumSetting.h"
#include "UObject/NoExportTypes.h"
#include "SCGameSettings.generated.h"

class UMirrorAnimDB;
class UOrderService;
class UArenaSettings;

UCLASS()
class SIFU_API USCGameSettings : public USCBaseGameSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMirrorAnimDB> m_DefaulMirrorAnimDB;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bFilterByOrderServiceOnTeleport;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TSoftClassPtr<UOrderService>> m_FilteringOrderServicesOnTeleport;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath m_DefaultAttackTable;
    
    UPROPERTY(Config, EditAnywhere)
    FSCWuguanUserEnumSetting m_UserEnums[21];
    
    UPROPERTY(Config, EditAnywhere)
    FDataTableRowHandle m_DefaultHitbox;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath m_PoseAssetForFacial;
    
    UPROPERTY(Config, EditAnywhere)
    float m_DefaultPoseAssetNotifyStateEaseIn;
    
    UPROPERTY(Config, EditAnywhere)
    float m_DefaultPoseAssetNotifyStateEaseOut;
    
    UPROPERTY(Config, EditAnywhere)
    float m_fPredictionTime;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iHitBoxSamplingInFPS;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 m_uiPredictionStep;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bAllowPredictionOnMovement;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bDetachAvoidCapsuleWhenNoAvoidWindow;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UArenaSettings> m_ArenaSettings;
    
    USCGameSettings();
};

