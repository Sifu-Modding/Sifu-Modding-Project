#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AIContextualDefense.generated.h"

class UAIInfluenceNode;

UCLASS(Blueprintable)
class SIFU_API UAIContextualDefense : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIInfluenceNode*> m_Nodes;
    
    UAIContextualDefense();

};

