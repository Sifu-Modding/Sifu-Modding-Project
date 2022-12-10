#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MenuReferenceWithRequiredTags.generated.h"

class UMenuWidget;

USTRUCT(BlueprintType)
struct FMenuReferenceWithRequiredTags {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UMenuWidget> m_Menu;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer m_RequiredGameFlowTags;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bLoadSyncAtInit;
    
    SIFU_API FMenuReferenceWithRequiredTags();
};

