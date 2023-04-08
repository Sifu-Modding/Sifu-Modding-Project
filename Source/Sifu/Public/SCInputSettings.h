#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ActionMappingCompatibilityRule.h"
#include "AlwaysCollidingActions.h"
#include "InputAction.h"
#include "InputMappingCompatibilityRule.h"
#include "InputMappingData.h"
#include "InputMappingProfileEnumHandler.h"
#include "InputPresetsEnumHandler.h"
#include "InputPriorityGroup.h"
#include "MappingProfileList.h"
#include "RemappingClasses.h"
#include "RemappingIncompatibilityGroup.h"
#include "SCInputSettings.generated.h"

class UGenericInputData;
class UInputMappingProfileDB;
class UMenuDB;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class SIFU_API USCInputSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eInputAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eAltInputAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bVirtualCursorAcceleration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVirtualCursorAcceleration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVirtualCursorMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVirtualCursorStickySlowdown;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVirtualCursorDeadZone;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSnapEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSnapSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMenuDB> m_MenuDB;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActivateRemapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputPriorityGroup> m_InputPriority;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAlwaysCollidingActions> m_AlwaysCollidingActions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<InputAction> m_ActionPriority;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FInputPresetsEnumHandler, FInputMappingData> m_Mapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FInputMappingProfileEnumHandler, FMappingProfileList> m_MappingProfileList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<InputAction> m_UnremappableActions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRemappingIncompatibilityGroup> m_IncompatibilityGroups;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UGenericInputData>, FInputMappingCompatibilityRule> m_InputCustomCompatibilityRules;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionMappingCompatibilityRule> m_ActionCompatibilityRules;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGenericInputData> m_EmptyInputData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemappingClasses m_BaseRemapClasses;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<InputAction, FRemappingClasses> m_CustomActionRemapping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FInputPresetsEnumHandler, FRemappingClasses> m_CustomPresetRemapping;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMenuDB* m_CachedMenuDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInputMappingProfileDB*> m_CachedProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGenericInputData*> m_CachedInputDatas;
    
public:
    USCInputSettings();
};

