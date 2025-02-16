#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SCBlueprintNotify.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class SIFU_API USCBlueprintNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USCBlueprintNotify();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ReceivedNotifyFromActiveOrder(USkeletalMeshComponent* _meshComp, UAnimSequenceBase* _animation) const;
    
};

