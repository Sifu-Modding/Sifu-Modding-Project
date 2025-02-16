#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCDynamicDelegateDelegate.h"
#include "SCMathExpressionFloat.h"
#include "SCMathExpressionInteger.h"
#include "SCTypedValue.h"
#include "Templates/SubclassOf.h"
#include "SCHelpers.generated.h"

class AActor;
class UAbilityTask;
class UCurveFloat;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class SCCORE_API USCHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCHelpers();

    UFUNCTION(BlueprintCallable)
    static bool BPF_TestExpressionInt(const FSCMathExpressionInteger& _expression, int32 _iInputValue);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_TestExpressionFloat(const FSCMathExpressionFloat& _expression, float _fInputValue);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_SlowMotionFinisher(UObject* _context, UCurveFloat* _curve, FSCDynamicDelegate _onFinished, float _fScale, bool _bIsRelevantForGameplay, bool _bStopOnOtherSlomo);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_SlowMotion(UObject* _context, UCurveFloat* _curve, float _fScale, bool _bIsRelevantForGameplay);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetLocalizationPreviewLanguage(const FString& _inCulture);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_RandomBoolFromProbability(const float _fProba);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_PushBlockSlowmotion(bool _bFreezeAnySlowmotion);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_PopBlockSlowmotion(int32 _iHandle, bool _bUnFreezeAnySlowmotion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsSlowMotionEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSCTypedValue BPF_IntToTypedValue(int32 _iValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_Int32RangeContains(const FInt32Range& _range, int32 _iValue);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_InstantSlowMotion(UObject* _context, float _fScale, bool _bIsRelevantForGameplay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetSlowMotionDebugUserValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetSlowMotionDebugCoef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, FText> BPF_GetIsoCultureToDisplayName();
    
    UFUNCTION(BlueprintCallable)
    static UWorld* BPF_GetEditorWorld();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* BPF_GetActorOfClassInWorld(const UObject* WorldContextObject, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSCTypedValue BPF_FloatToTypedValue(float _fValue);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_EndTasks(const TArray<UAbilityTask*>& _tasks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_Contains(const FFloatRange& _FloatRange, float _fValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSCTypedValue BPF_BoolToTypedValue(bool _bValue);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_AbortSlowMotion(UObject* _context, int32 _iSlowMoID, bool _bIsRelevantForGameplay);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_AbortCurrentSlowMotion(UObject* _context, bool _bIsRelevantForGameplay);
    
};

