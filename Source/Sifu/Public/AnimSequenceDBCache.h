#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AnimSequenceDBCache.generated.h"

class ABaseWeapon;
class UAnimSequenceEntryDB;

USTRUCT(BlueprintType)
struct FAnimSequenceDBCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<TSubclassOf<ABaseWeapon>, UAnimSequenceEntryDB*> m_Sequences;
    
    SIFU_API FAnimSequenceDBCache();
};

