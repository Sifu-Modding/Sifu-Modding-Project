#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "InputMappingNode.h"
#include "InputMappingTree.generated.h"

USTRUCT(BlueprintType)
struct FInputMappingTree {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<InputAction, FInputMappingNode> m_NodePerAction;
    
    SIFU_API FInputMappingTree();
};

