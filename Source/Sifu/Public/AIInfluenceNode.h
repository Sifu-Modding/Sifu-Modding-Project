#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIInfluenceNode.generated.h"

class UAIInfluenceNode;

UCLASS(Abstract, Blueprintable)
class SIFU_API UAIInfluenceNode : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iVerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAIInfluenceNode*> m_LinkedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNodeIndex;
    
public:
    UAIInfluenceNode();

};

