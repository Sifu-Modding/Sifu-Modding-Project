#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceContainerInterface -FallbackName=BoneReferenceContainerInterface
#include "Engine/DataAsset.h"
#include "SkillsDB.generated.h"

class USkillsChilds;

UCLASS(Blueprintable)
class USkillsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkillsChilds* m_Root;
    
    USkillsDB();
    
    // Fix for true pure virtual functions not being implemented
};

