#pragma once
#include "CoreMinimal.h"
#include "BaseArenaObjective.h"
#include "ArenaTargetsObjective.generated.h"

class AAISpawner;

UCLASS(Blueprintable)
class SIFU_API UArenaTargetsObjective : public UBaseArenaObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AAISpawner>> m_Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHideTargetIndicatorsWhileNotFighting;
    
    UArenaTargetsObjective();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<AAISpawner>> BPF_GetTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnTargetDown(AAISpawner* _AISpawner);
    
};

