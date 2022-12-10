#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FightingCharacterHelpers.generated.h"

class UAnimSequence;

UCLASS(BlueprintType)
class SIFU_API UFightingCharacterHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFightingCharacterHelpers();
    UFUNCTION(BlueprintCallable)
    static int32 BPF_PickRandomAnimSequence(UPARAM(Ref) TArray<UAnimSequence*>& _inOutAnimHistory, const TArray<UAnimSequence*>& _animSelection, bool _bAddToHistory);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_PickRandomAnimation(UPARAM(Ref) TArray<UAnimSequence*>& _inOutAnimHistory, const TArray<FAnimContainer>& _animSelection, bool _bAddToHistory);
    
};

