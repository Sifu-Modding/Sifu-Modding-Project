#pragma once
#include "CoreMinimal.h"
#include "CarriedProps.h"
#include "Templates/SubclassOf.h"
#include "AICharacterSpawnParams.generated.h"

class ABaseCharacter;
class ABaseWeapon;
class UAIPhaseScenario;

USTRUCT(BlueprintType)
struct FAICharacterSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ParamsName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseCharacter> m_SpawningClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPhaseScenario* m_PhaseScenarios[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarriedProps> m_carriedProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseWeapon> m_carriedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CharacterPoolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CarriedWeaponPoolName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CustomImpostorName;
    
    SIFU_API FAICharacterSpawnParams();
};

