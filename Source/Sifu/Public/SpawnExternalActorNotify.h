#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCAnimNotify.h"
#include "UObject/NoExportTypes.h"
#include "SpawnExternalActorNotify.generated.h"

class AActor;

UCLASS(CollapseCategories)
class SIFU_API USpawnExternalActorNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> m_ActorClassToSpawn;
    
    UPROPERTY(EditAnywhere)
    FName m_CharacterBoneName;
    
    UPROPERTY(EditAnywhere)
    FName m_WeaponBoneName;
    
    UPROPERTY(EditAnywhere)
    FVector m_SpawnOffset;
    
public:
    USpawnExternalActorNotify();
};

