#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "AttackIKProfileInfos.generated.h"

USTRUCT(BlueprintType)
struct FAttackIKProfileInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_Profile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimCurveName;
    
    SIFU_API FAttackIKProfileInfos();
};

