#pragma once
#include "CoreMinimal.h"
#include "AICustomBehaviorTree.h"
#include "AICustomBehaviorTreeList.generated.h"

USTRUCT(BlueprintType)
struct FAICustomBehaviorTreeList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAICustomBehaviorTree> m_DynamicBehaviorList;
    
    SIFU_API FAICustomBehaviorTreeList();
};

