#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIInfluenceNode.generated.h"

class UAIInfluenceNode;

UCLASS(Abstract)
class SIFU_API UAIInfluenceNode : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 m_iVerNum;
    
    UPROPERTY()
    TArray<UAIInfluenceNode*> m_LinkedNodes;
    
    UPROPERTY()
    int32 m_iNodeIndex;
    
public:
    UAIInfluenceNode();
};

