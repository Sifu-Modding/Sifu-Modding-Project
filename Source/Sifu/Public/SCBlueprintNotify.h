#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SCBlueprintNotify.generated.h"

class USkeletalMeshComponent;
class UAnimSequenceBase;

UCLASS(Abstract, CollapseCategories)
class SIFU_API USCBlueprintNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USCBlueprintNotify();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ReceivedNotifyFromActiveOrder(USkeletalMeshComponent* _meshComp, UAnimSequenceBase* _animation) const;
    
};

