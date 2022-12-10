#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplayKeyWidgetVisualData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FReplayKeyWidgetVisualData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* m_Texture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D m_vSize;
    
    SIFU_API FReplayKeyWidgetVisualData();
};

