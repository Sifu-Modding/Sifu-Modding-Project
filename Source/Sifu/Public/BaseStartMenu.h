#pragma once
#include "CoreMinimal.h"
#include "MenuWidget.h"
#include "BaseStartMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UBaseStartMenu : public UMenuWidget {
    GENERATED_BODY()
public:
    UBaseStartMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsDebugPIEEnabled() const;
    
};

