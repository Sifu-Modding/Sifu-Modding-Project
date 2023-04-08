#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplayKeyWidgetVisualData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FReplayKeyWidgetVisualData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vSize;
    
    SIFU_API FReplayKeyWidgetVisualData();
};

