#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BaseActorTargetConditionInstance.h"
#include "HitActionLauncher.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UHitActionLauncher : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorTargetConditionInstance m_hitActionCondition;
    
    UHitActionLauncher();

};

