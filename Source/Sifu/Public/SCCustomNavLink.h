#pragma once
#include "CoreMinimal.h"
#include "NavLinkCustomComponent.h"
#include "SCCustomNavLink.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USCCustomNavLink : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
    USCCustomNavLink();
};

