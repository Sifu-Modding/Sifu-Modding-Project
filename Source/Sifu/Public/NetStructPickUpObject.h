#pragma once
#include "CoreMinimal.h"
#include "NetOrderStructPlayAnimVariableWeight.h"
#include "NetStructPickUpObject.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FNetStructPickUpObject : public FNetOrderStructPlayAnimVariableWeight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_PickUpObject;
    
    SIFU_API FNetStructPickUpObject();
};

