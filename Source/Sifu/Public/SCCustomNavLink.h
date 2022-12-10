#pragma once
#include "CoreMinimal.h"
#include "NavLinkCustomComponent.h"
#include "ESpeedState.h"
#include "SCCustomNavLink.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USCCustomNavLink : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bOverrideSpeedState;
    
    UPROPERTY(EditAnywhere)
    ESpeedState m_eForcedSpeedState;
    
public:
    USCCustomNavLink();
};

