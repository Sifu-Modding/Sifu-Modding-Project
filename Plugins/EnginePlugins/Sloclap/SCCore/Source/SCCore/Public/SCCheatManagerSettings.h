#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "SCCheatManagerSettings.generated.h"

class UCheatData;

UCLASS(Blueprintable)
class SCCORE_API USCCheatManagerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UCheatData>> m_CheatData;
    
    USCCheatManagerSettings();
    UFUNCTION(BlueprintPure)
    UCheatData* BPF_GetCheatData(const FGameplayTag& _cheatTag) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool BPE_IsCheatLegit(const FGameplayTag& _cheatTag) const;
    
};

