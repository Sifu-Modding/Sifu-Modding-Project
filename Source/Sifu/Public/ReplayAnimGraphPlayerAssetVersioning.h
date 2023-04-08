#pragma once
#include "CoreMinimal.h"
#include "ReplayAnimGraphPlayerAssetVersioning.generated.h"

USTRUCT(BlueprintType)
struct FReplayAnimGraphPlayerAssetVersioning {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iAnimInstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iStateMachineIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iStateMachineStateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPlayerAssetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_UniqueID;
    
    SIFU_API FReplayAnimGraphPlayerAssetVersioning();
};

