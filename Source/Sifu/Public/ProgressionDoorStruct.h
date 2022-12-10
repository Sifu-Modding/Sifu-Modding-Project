#pragma once
#include "CoreMinimal.h"
#include "ProgressionDoorStruct.generated.h"

class UProgressionDoorData;
class UQuestItemData;

USTRUCT(BlueprintType)
struct SIFU_API FProgressionDoorStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UProgressionDoorData* m_ProgressionDoorData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UQuestItemData*> m_Conditions;
    
    FProgressionDoorStruct();
};

