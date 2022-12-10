#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "CameraBearerInterface.generated.h"

UINTERFACE(Blueprintable)
class SIFU_API UCameraBearerInterface : public UInterface {
    GENERATED_BODY()
};

class SIFU_API ICameraBearerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetActorRefTransform(float _fDt);
    
};

