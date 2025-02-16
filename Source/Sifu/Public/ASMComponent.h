#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCDelegate.h"
#include "SCPoolableActorComponent.h"
#include "EFightingActionState.h"
#include "ASMComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UASMComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicMulticast m_OnActionStateChangedDyn;
    
    UASMComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFightingActionState BPF_GetCurrentActionState() const;
    

    // Fix for true pure virtual functions not being implemented
};

