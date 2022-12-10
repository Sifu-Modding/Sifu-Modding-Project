#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "ECharacterGender.h"
#include "GenderCondition.generated.h"

UCLASS()
class SIFU_API UGenderCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECharacterGender m_eGender;
    
    UGenderCondition();
};

