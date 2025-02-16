#pragma once
#include "CoreMinimal.h"
#include "ArchetypeSituationDescription.h"
#include "ThePlainesLevel.h"
#include "WeaponSituationDescription.h"
#include "ThePlainesLDLevel.generated.h"

class UArchetypeSituationDB;
class UDataTable;

UCLASS(Blueprintable)
class SIFU_API AThePlainesLDLevel : public AThePlainesLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_dynamicPropsDataTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiEncouterZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLastManGaugeThresold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArchetypeSituationDescription> m_ArchetypesInSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArchetypeSituationDB* m_ArchetypesInSituationDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponSituationDescription> m_WeaponsInSituation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMinMaxGenericWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxMaxGenericWeapons;
    
public:
    AThePlainesLDLevel(const FObjectInitializer& ObjectInitializer);

};

