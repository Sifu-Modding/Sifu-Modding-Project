#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "SCBaseGameSettings.h"
#include "SCWuguanUserEnumSetting.h"
#include "SCGameSettings.generated.h"

class UArenaSettings;
class UMirrorAnimDB;
class UOrderService;

UCLASS(Blueprintable)
class SIFU_API USCGameSettings : public USCBaseGameSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMirrorAnimDB> m_DefaulMirrorAnimDB;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFilterByOrderServiceOnTeleport;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UOrderService>> m_FilteringOrderServicesOnTeleport;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_DefaultAttackTable;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCWuguanUserEnumSetting m_UserEnums[22];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_DefaultHitbox;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath m_PoseAssetForFacial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DefaultPoseAssetNotifyStateEaseIn;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DefaultPoseAssetNotifyStateEaseOut;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPredictionTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iHitBoxSamplingInFPS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiPredictionStep;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowPredictionOnMovement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDetachAvoidCapsuleWhenNoAvoidWindow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UArenaSettings> m_ArenaSettings;
    
    USCGameSettings();
};

