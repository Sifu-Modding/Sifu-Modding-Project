#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "VitalPointWidget.generated.h"

class AVitalPointActor;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UVitalPointWidget : public USCUserWidget {
    GENERATED_BODY()
public:
    UVitalPointWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVitalPointActor* BPF_GetVitalPointActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnVitalPointActorSet(AVitalPointActor* _vitalPointOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnVitalPointActorRemove(AVitalPointActor* _vitalPointPreviousOwner);
    
};

