#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawningClassContainer.generated.h"

class ABaseCharacter;

USTRUCT(BlueprintType)
struct FSpawningClassContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseCharacter> m_SpawningClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ImpostorCustomName;
    
    SIFU_API FSpawningClassContainer();
};

