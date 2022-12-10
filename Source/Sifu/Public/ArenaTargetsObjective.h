#pragma once
#include "CoreMinimal.h"
#include "BaseArenaObjective.h"
#include "ArenaTargetsObjective.generated.h"

class AAISpawner;

UCLASS()
class SIFU_API UArenaTargetsObjective : public UBaseArenaObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftObjectPtr<AAISpawner>> m_Targets;
    
    UArenaTargetsObjective();
    UFUNCTION(BlueprintPure)
    TArray<TSoftObjectPtr<AAISpawner>> BPF_GetTargets() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnTargetDown(AAISpawner* _AISpawner);
    
};

