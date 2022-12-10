#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WGAiAction.h"
#include "AIActionDropObject.generated.h"

UCLASS()
class SIFU_API UAIActionDropObject : public UWGAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector m_vDropImpulse;
    
    UAIActionDropObject();
    UFUNCTION(BlueprintCallable)
    void BPF_DropObjectInHand();
    
};

