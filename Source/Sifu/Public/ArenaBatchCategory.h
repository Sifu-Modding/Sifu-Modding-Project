#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ArenaBatchCategory.generated.h"

USTRUCT(BlueprintType)
struct FArenaBatchCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_allGoldenStarsAchievementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCurrencyPerStar;
    
    SIFU_API FArenaBatchCategory();
};

