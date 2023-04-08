#pragma once
#include "CoreMinimal.h"
#include "TensionVolumesContainer.generated.h"

class ASoundTensionPortal;
class ASoundTensionVolume;

USTRUCT(BlueprintType)
struct FTensionVolumesContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASoundTensionVolume>> m_overlappedTensionVolumes;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<ASoundTensionPortal>, bool> m_TensionPortalsCrossed;
    
    SIFU_API FTensionVolumesContainer();
};

