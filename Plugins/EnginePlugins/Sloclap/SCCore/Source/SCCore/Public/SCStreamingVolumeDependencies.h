#pragma once
#include "CoreMinimal.h"
#include "SCStreamingVolumeDependency.h"
#include "SCStreamingVolumeDependencies.generated.h"

class ASCLevelStreamingVolume;

USTRUCT(BlueprintType)
struct FSCStreamingVolumeDependencies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASCLevelStreamingVolume*> m_Volumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCStreamingVolumeDependency> m_VolumeDependencies;
    
    SCCORE_API FSCStreamingVolumeDependencies();
};

