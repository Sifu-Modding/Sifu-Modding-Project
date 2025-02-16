#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EGameOptionTypes.h"
#include "OptionListenerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UOptionListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOptionChangedDynamicDelegate, EGameOptionTypes, _eOptionType);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOptionChangedDynamicDelegate OnOptionChanged;
    
    UOptionListenerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnOptionChanged(EGameOptionTypes _eOptionType);
    
};

