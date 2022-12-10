#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ReplayKeyWidgetVisualData.h"
#include "ReplayKeyWidgetVisualKey.h"
#include "ReplayKeyWidgetVisualsDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UReplayKeyWidgetVisualsDB : public UDataAsset {
    GENERATED_BODY()
public:
protected:
  /*  UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FReplayKeyWidgetVisualKey, FReplayKeyWidgetVisualData> m_Visuals;*/
    
   /* UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FReplayKeyWidgetVisualData m_DefaultVisual;*/
    
public:
    UReplayKeyWidgetVisualsDB();
};

