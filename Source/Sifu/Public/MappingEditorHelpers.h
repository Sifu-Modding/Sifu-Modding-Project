#pragma once
#include "CoreMinimal.h"
#include "UObject/Class.h"
#include "UObject/NoExportTypes.h"
#include "InputMappingData.h"
#include "InputMappingGroup.h"
#include "InputMappingKeySlot.h"
#include "InputMappingKeySlotContainer.h"
#include "InputMappingProfileEnumHandler.h"
#include "InputPresetsEnumHandler.h"
#include "InputPriorityGroup.h"
#include "MappingEditorHelpers.generated.h"

UCLASS(Blueprintable)
class UMappingEditorHelpers : public UClass {
    GENERATED_BODY()
public:
    UMappingEditorHelpers();

    UFUNCTION(BlueprintCallable)
    static FString BPF_GetInputPriorityGroupDesc(const FInputPriorityGroup& _group);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_GetInputMappingShowSlot(const FInputMappingKeySlotContainer& _slot);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_GetInputMappingShowData(const FInputMappingKeySlotContainer& _slot);
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_GetInputMappingKeySlotDesc(const FInputMappingKeySlot& _slot);
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_GetInputMappingKeySlotContainerTitle(const FInputMappingKeySlotContainer& _slot);
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_GetInputMappingKeySlotContainerDesc(const FInputMappingKeySlotContainer& _slot);
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_GetInputMappingGroupTitle(const FInputMappingGroup& _mapping);
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_GetInputMappingGroupDesc(const FInputMappingGroup& _mapping);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor BPF_GetInputMappingGroupColor(const FInputMappingGroup& _mapping);
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_GetInputMappingDataSlotDesc(const FInputMappingData& _data);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_GetInputMappingDataShowSlot(const FInputMappingData& _slot);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_FindInputProfileAvailableKey(FInputMappingProfileEnumHandler& _modifier, int32 _iIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_FindInputPresetAvailableKey(FInputPresetsEnumHandler& _modifier, int32 iIndex);
    
};

