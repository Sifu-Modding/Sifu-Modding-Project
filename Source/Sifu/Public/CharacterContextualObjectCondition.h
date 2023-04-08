#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "BaseActorTargetConditionInstance.h"
#include "Templates/SubclassOf.h"
#include "CharacterContextualObjectCondition.generated.h"

class UInteractionObjectComponent;

UCLASS(Blueprintable)
class SIFU_API UCharacterContextualObjectCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasContextualObjectInRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorTargetConditionInstance m_ConditionOnObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractionObjectComponent> m_CheckType;
    
    UCharacterContextualObjectCondition();
};

