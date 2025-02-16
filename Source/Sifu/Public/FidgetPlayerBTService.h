#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "EAIFidgetTypes.h"
#include "FidgetPlayerBTService.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFidgetPlayerBTService : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIFidgetTypes m_eFidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRestoreTypeOnCeaseRelevant;
    
public:
    UFidgetPlayerBTService();

};

