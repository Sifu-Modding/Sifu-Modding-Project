#pragma once
#include "CoreMinimal.h"
#include "SCGameplayAbility.h"
#include "TauntAbility.generated.h"

class URandomAnimDB;

UCLASS(Blueprintable)
class SIFU_API UTauntAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URandomAnimDB* m_randomAnimDB;
    
public:
    UTauntAbility();

};

