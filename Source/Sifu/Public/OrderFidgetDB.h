#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "EditableOrderType.h"
#include "FidgetDBDescription.h"
#include "OrderDB.h"
#include "OrderFidgetDB.generated.h"

class UDataTable;
class UFidgetDB;

UCLASS(Blueprintable)
class SIFU_API UOrderFidgetDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_VariableWeightLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_BlendProfileBySpeedStateTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSyncFidgetMirrorWithQuadrantCooldown;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFidgetDBDescription m_FidgetDBs[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFidgetDB* m_TakeOutWeaponFidgetDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHideWeaponPostBlendRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditableOrderType> m_eTakeOutWeaponPostOrderList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlayAlertFidgetIfMoveStatusMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPlayAlertFidgetIfMoveStatusDoesntMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFidgetDefaultBlendInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFidgetMaxBlendInDurationByAnimPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFidgetDefaultBlendOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFidgetQuickBlendOutDuration;
    
    UOrderFidgetDB();
};

