#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AIActionAttackClassInstance.h"
#include "AvailabilityLayerContainer.h"
#include "ComboNodeAttackInfos.h"
#include "ComboTransitions.h"
#include "EComboTransition.h"
#include "ComboNode.generated.h"

class UComboEvent;

USTRUCT(BlueprintType)
struct FComboNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboNodeAttackInfos m_AttackInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FComboNodeAttackInfos> m_ConditionalAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_AIAttackActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIActionAttackClassInstance m_AIAttackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboTransitions m_Transitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NodeRedirect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAvailabilityLayerContainer m_NodeRedirectAvailabilityLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EComboTransition> m_NodeRedirectIgnoredTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComboEvent* m_Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSkip;
    
    SIFU_API FComboNode();
};

