#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AIContextualDefense.generated.h"

class UAIInfluenceNode;

UCLASS()
class SIFU_API UAIContextualDefense : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UAIInfluenceNode*> m_Nodes;
    
    UAIContextualDefense();
};

