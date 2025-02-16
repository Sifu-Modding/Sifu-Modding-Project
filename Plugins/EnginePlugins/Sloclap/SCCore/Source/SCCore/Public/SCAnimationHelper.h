#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "SCAnimationHelper.generated.h"

class UAnimNotify;
class UAnimNotifyState;
class UAnimSequence;
class UAnimSequenceBase;
class UAnimationAsset;

UCLASS(Blueprintable)
class SCCORE_API USCAnimationHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCAnimationHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasInvalidNotifies(UAnimSequenceBase* _sequence, const FString& _inNotifyName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetValidUniqueMarkerNames(UAnimationAsset* _animationAsset, bool& _bOutHasValidMarkers, TArray<FName>& _outMarkerNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNotifyTriggerTime(const FAnimNotifyEvent& _notify);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNotifyEndTriggerTime(const FAnimNotifyEvent& _notify);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNotifyDuration(const FAnimNotifyEvent& _notify);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindNotifyStateByClass(UAnimSequenceBase* _sequence, TSubclassOf<UAnimNotifyState> _class, bool _bIncludeChildren, FAnimNotifyEvent& _outFoundNotify, bool& _bOutFound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindNotifyByClass(UAnimSequenceBase* _sequence, TSubclassOf<UAnimNotify> _class, bool _bIncludeChildren, FAnimNotifyEvent& _outFoundNotify, bool& _bOutFound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindNotifiesStateByClass(UAnimSequenceBase* _sequence, TSubclassOf<UAnimNotifyState> _class, bool _bIncludeChildren, TArray<FAnimNotifyEvent>& _outFoundNotifies);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform BPF_ExtractRootTrackTransform(UAnimSequence* _sequence, float _fAnimRatio);
    
};

