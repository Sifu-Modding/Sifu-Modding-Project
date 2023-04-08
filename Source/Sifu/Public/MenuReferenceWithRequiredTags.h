#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MenuReferenceWithRequiredTags.generated.h"

class UMenuWidget;

USTRUCT(BlueprintType)
struct FMenuReferenceWithRequiredTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMenuWidget> m_Menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_RequiredGameFlowTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLoadSyncAtInit;
    
    SIFU_API FMenuReferenceWithRequiredTags();
};

