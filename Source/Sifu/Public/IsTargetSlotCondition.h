#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "BaseActorTargetCondition.h"
#include "IsTargetSlotCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UIsTargetSlotCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_Slot;
    
    UIsTargetSlotCondition();

};

