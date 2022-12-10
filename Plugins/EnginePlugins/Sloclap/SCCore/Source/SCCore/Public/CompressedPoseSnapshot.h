#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "QuatNetSerializedCompressed.h"
#include "CompressedPoseSnapshot.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FCompressedPoseSnapshot {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<uint8> m_BoneFlags;
    
    UPROPERTY()
    TArray<FVector_NetQuantize10> m_Translations;
    
    UPROPERTY()
    TArray<FQuatNetSerializedCompressed> m_Rotations;
    
    UPROPERTY()
    TArray<FVector_NetQuantize10> m_Scales;
    
public:
    FCompressedPoseSnapshot();
};

