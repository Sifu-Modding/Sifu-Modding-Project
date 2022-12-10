#pragma once
#include "CoreMinimal.h"
#include "SCStreamingVolumeDependency.generated.h"

class ASCLevelStreamingVolume;

USTRUCT(BlueprintType)
struct FSCStreamingVolumeDependency {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ASCLevelStreamingVolume* m_Volume;
    
    UPROPERTY(EditAnywhere)
    bool m_bRecursive;
    
    SCCORE_API FSCStreamingVolumeDependency();
};

