#pragma once
#include "CoreMinimal.h"
#include "ECharacterGender.h"
#include "BaseActorCondition.h"
#include "GenderCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UGenderCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterGender m_eGender;
    
    UGenderCondition();

};

