#pragma once
#include "CoreMinimal.h"
#include "NetOrderStruct.h"
#include "NetStructMoveToWithPhysWalking.generated.h"

class UNavLinkCustomComponent;

USTRUCT(BlueprintType)
struct FNetStructMoveToWithPhysWalking : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UNavLinkCustomComponent* m_NavLinkComponent;
    
    SIFU_API FNetStructMoveToWithPhysWalking();
};

