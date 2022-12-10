#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "SkillsDB.generated.h"

class USkillsChilds;

UCLASS(BlueprintType)
class USkillsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    USkillsChilds* m_Root;
    
    USkillsDB();
    
    // Fix for true pure virtual functions not being implemented
};

