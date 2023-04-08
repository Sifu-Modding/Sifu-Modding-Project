#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SCAnimNotify.h"
#include "Templates/SubclassOf.h"
#include "SpawnExternalActorNotify.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API USpawnExternalActorNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_ActorClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_CharacterBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_WeaponBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_SpawnOffset;
    
public:
    USpawnExternalActorNotify();
};

