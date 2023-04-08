#pragma once
#include "CoreMinimal.h"
#include "SCStreamingVolumeDependency.generated.h"

class ASCLevelStreamingVolume;

USTRUCT(BlueprintType)
struct FSCStreamingVolumeDependency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASCLevelStreamingVolume* m_Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRecursive;
    
    SCCORE_API FSCStreamingVolumeDependency();
};

