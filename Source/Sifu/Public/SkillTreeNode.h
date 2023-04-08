#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SkillTreeNode.generated.h"

class USkillGameplayEffect;
class USkillsChilds;

USTRUCT(BlueprintType)
struct FSkillTreeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkillGameplayEffect> m_Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkillsChilds* m_Childs;
    
    SIFU_API FSkillTreeNode();
};

