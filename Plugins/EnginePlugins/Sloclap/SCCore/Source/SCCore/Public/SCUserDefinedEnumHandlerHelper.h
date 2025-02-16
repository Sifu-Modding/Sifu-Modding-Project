#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCUserDefinedEnumHandler.h"
#include "SCUserDefinedEnumHandlerHelper.generated.h"

class UEnum;

UCLASS(Blueprintable)
class SCCORE_API USCUserDefinedEnumHandlerHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCUserDefinedEnumHandlerHelper();

    UFUNCTION(BlueprintCallable)
    static void BPF_SetEnumValue(UPARAM(Ref) FSCUserDefinedEnumHandler& _enum, uint8 _uiEnumValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 BPF_GetEnumValue(const FSCUserDefinedEnumHandler& _enum, const UEnum* _enumObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName BPF_GetEnumNameValue(const FSCUserDefinedEnumHandler& _enum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText BPF_GetEnumDisplayName(const FSCUserDefinedEnumHandler& _enum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_Equal(const FSCUserDefinedEnumHandler& _enum1, const FSCUserDefinedEnumHandler& _enum2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSCUserDefinedEnumHandler BPF_ConvertEnumToSCUserEnum(UEnum* _enum, uint8 _value);
    
};

