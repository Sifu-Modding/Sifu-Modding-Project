#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "Components/Widget.h"
#include "IntStatTextBlock.generated.h"

class UColorComparisonProfile;

UCLASS()
class UIntStatTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Stat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 StatIncrement;
    
    UPROPERTY()
    UWidget::FGetInt32 StatDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CompareStat;
    
    UPROPERTY()
    UWidget::FGetInt32 CompareStatDelegate;
    
    UPROPERTY(EditAnywhere)
    UColorComparisonProfile* m_ColorComparisonProfile;
    
    UPROPERTY(EditAnywhere)
    bool m_bHightIsBetter;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanBeNegative;
    
    UIntStatTextBlock();
};

