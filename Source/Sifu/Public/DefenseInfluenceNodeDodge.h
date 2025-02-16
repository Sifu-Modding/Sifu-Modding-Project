#pragma once
#include "CoreMinimal.h"
#include "ContextualDefenseInfluenceNode.h"
#include "EDodgeDirectionType.h"
#include "DefenseInfluenceNodeDodge.generated.h"

UCLASS(Blueprintable)
class SIFU_API UDefenseInfluenceNodeDodge : public UContextualDefenseInfluenceNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDodgeDirectionType m_eDirectionTypeOverride;
    
public:
    UDefenseInfluenceNodeDodge();

};

