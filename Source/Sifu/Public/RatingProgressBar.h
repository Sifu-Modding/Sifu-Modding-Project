#pragma once
#include "CoreMinimal.h"
#include "Components/ProgressBar.h"
#include "RatingProgressBar.generated.h"

UCLASS()
class URatingProgressBar : public UProgressBar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iImageCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iSteps;
    
    URatingProgressBar();
};

