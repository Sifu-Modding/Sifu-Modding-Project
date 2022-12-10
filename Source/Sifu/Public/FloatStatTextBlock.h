#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "Components/Widget.h"
#include "FloatStatTextBlock.generated.h"

class UColorComparisonProfile;

UCLASS()
class UFloatStatTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Stat;
    
    UPROPERTY()
    UWidget::FGetFloat StatDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CompareStat;
    
    UPROPERTY()
    UWidget::FGetFloat CompareStatDelegate;
    
    UPROPERTY(EditAnywhere)
    UColorComparisonProfile* m_ColorComparisonProfile;
    
    UPROPERTY(EditAnywhere)
    bool m_bHightIsBetter;
    
    UPROPERTY(EditAnywhere)
    FText m_EmptyText;
    
    UPROPERTY(EditAnywhere)
    FText m_Format;
    
    UPROPERTY(EditAnywhere)
    float m_fMultiply;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsAttributeScale;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseGrouping;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMinimumIntegralDigits;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMaximumIntegralDigits;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMinimumFractionalDigits;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMaximumFractionalDigits;
    
    UPROPERTY(EditAnywhere)
    bool m_bCanBeNegative;
    
    UFloatStatTextBlock();
};

