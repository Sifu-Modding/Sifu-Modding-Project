#pragma once
#include "CoreMinimal.h"
#include "ReplayPlayerAssetAccumulatedTime.h"
#include "ReplayReplicatedStateMachine.generated.h"

USTRUCT(BlueprintType)
struct FReplayReplicatedStateMachine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iStateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAnimInstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iStateMachineIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReplayPlayerAssetAccumulatedTime> m_ReplicatedPlayerAssets;
    
    SIFU_API FReplayReplicatedStateMachine();
};

