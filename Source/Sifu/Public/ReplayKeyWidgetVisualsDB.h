#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ReplayKeyWidgetVisualData.h"
#include "ReplayKeyWidgetVisualKey.h"
#include "ReplayKeyWidgetVisualsDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UReplayKeyWidgetVisualsDB : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FReplayKeyWidgetVisualKey, FReplayKeyWidgetVisualData> m_Visuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyWidgetVisualData m_DefaultVisual;
    
public:
    UReplayKeyWidgetVisualsDB();

};

