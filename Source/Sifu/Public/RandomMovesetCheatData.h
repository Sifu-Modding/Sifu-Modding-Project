#pragma once
#include "CoreMinimal.h"
#include "CheatData.h"
#include "OverrideSettingArchetype.h"
#include "RandomMovesetCheatData.generated.h"

UCLASS(Blueprintable)
class SIFU_API URandomMovesetCheatData : public UCheatData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverrideSettingArchetype> m_ComboActionList;
    
public:
    URandomMovesetCheatData();

};

