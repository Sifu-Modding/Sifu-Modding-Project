#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AchievementUnlockConditionStruct.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FAchievementUnlockConditionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_NotificationTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_ObjectDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_UnlockDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery m_ConditionQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_UnlockObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowNotificationOnUnlocking;
    
    FAchievementUnlockConditionStruct();
};

