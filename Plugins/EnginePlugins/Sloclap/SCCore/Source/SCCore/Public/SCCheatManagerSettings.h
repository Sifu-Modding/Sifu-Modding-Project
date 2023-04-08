#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "SCCheatManagerSettings.generated.h"

class UCheatData;

UCLASS(Blueprintable)
class SCCORE_API USCCheatManagerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UCheatData>> m_CheatData;
    
    USCCheatManagerSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCheatData* BPF_GetCheatData(const FGameplayTag& _cheatTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool BPE_IsCheatLegit(const FGameplayTag& _cheatTag) const;
    
};

