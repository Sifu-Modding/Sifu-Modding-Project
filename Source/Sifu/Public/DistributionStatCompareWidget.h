#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DistributionStatCompareWidget.generated.h"

class UStatsComponent;
class UPreviewData;

UCLASS(EditInlineNew)
class UDistributionStatCompareWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UPreviewData* m_PreviewData;
    
public:
    UDistributionStatCompareWidget();
    UFUNCTION(BlueprintPure)
    UStatsComponent* BPF_GetStatsComponent();
    
    UFUNCTION(BlueprintPure)
    UPreviewData* BPF_GetPreviewData() const;
    
};

