#pragma once
#include "CoreMinimal.h"
#include "AIBTTaskNode.h"
#include "EFightingState.h"
#include "AIFightingStateBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIFightingStateBTTask : public UAIBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFightingState m_eFightingState;
    
public:
    UAIFightingStateBTTask();

};

