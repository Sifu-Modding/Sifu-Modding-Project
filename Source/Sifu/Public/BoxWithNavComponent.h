#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Templates/SubclassOf.h"
#include "BoxWithNavComponent.generated.h"

class UNavArea;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UBoxWithNavComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UBoxWithNavComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_SetAreaClass(TSubclassOf<UNavArea> _navArea);
    
};

