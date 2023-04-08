#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGameOptionTypes.h"
#include "GameOptionOverride.h"
#include "GameOptionTypeHelper.generated.h"

UCLASS(Blueprintable)
class SIFU_API UGameOptionTypeHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameOptionTypeHelper();
    UFUNCTION(BlueprintCallable)
    static void BPF_SetUserSettingValue(EGameOptionTypes _eSetting, float _fValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_RestoreGameOptionOverrides(TArray<FGameOptionOverride>& _inOutGameOptionOverrides, bool _bResetOptionOverridesOnRestore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_RestoreGameOption(FGameOptionOverride& _inOutGameOptionOverride, bool _bResetOptionOverrideOnRestore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_OverrideGameOptions(TArray<FGameOptionOverride>& _outGameOptionOverrides);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_OverrideGameOption(FGameOptionOverride& _outGameOptionOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetValueFromRatio(EGameOptionTypes _eInOption, float _fInRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetValueClamped(EGameOptionTypes _eInOption, float _fInValueToClamp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetValueAsInt(EGameOptionTypes _eInOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_GetValueAsBool(EGameOptionTypes _eInOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetValue(EGameOptionTypes _eInOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetUserSettingValueByOptionType(EGameOptionTypes _eOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetRatioFromValue(EGameOptionTypes _eInOption, float _fInValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetRatio(EGameOptionTypes _eInOption);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_GetRange(EGameOptionTypes _eInOption, float& _fOutMin, float& _fOutMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetDefaultValue(EGameOptionTypes _eInOption);
    
};

