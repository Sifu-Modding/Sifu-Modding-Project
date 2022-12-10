#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CarriedProps.h"
#include "AICharacterSpawnParams.generated.h"

class ABaseWeapon;
class ABaseCharacter;
class UAIPhaseScenario;

USTRUCT(BlueprintType)
struct FAICharacterSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName m_ParamsName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ABaseCharacter> m_SpawningClass;
    
    UPROPERTY(EditAnywhere)
    UAIPhaseScenario* m_PhaseScenarios[3];
    
    UPROPERTY(EditAnywhere)
    TArray<FCarriedProps> m_carriedProps;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ABaseWeapon> m_carriedWeapon;
    
    UPROPERTY()
    FName m_CharacterPoolName;
    
    UPROPERTY()
    FName m_CarriedWeaponPoolName;
    
    UPROPERTY()
    FName m_CustomImpostorName;
    
    SIFU_API FAICharacterSpawnParams();
};

