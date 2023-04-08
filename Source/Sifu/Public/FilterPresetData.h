#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "FilterPresetData.generated.h"

USTRUCT(BlueprintType)
struct FFilterPresetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings m_PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_DisplayText;
    
    SIFU_API FFilterPresetData();
};

