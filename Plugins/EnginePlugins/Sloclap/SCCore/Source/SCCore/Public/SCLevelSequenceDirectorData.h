#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ECinematicLayerTypes.h"
#include "InheritedDataAsset.h"
#include "MaterialParameterBlendSettings.h"
#include "SequenceRoleTypeDescription.h"
#include "SCLevelSequenceDirectorData.generated.h"

class USCLevelSequenceRoleData;

UCLASS(Blueprintable, CollapseCategories)
class SCCORE_API USCLevelSequenceDirectorData : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USCLevelSequenceRoleData*> m_Roles;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSequenceRoleTypeDescription> m_RoleTypesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBlendCharacterPositionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEaseInAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEaseOutAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEaseInCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEaseOutCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAnimateCameraSensor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bConstrainAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCutReplayDuringSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsCameraEditableInReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECinematicLayerTypes m_eCinematicLayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParameterBlendSettings> m_MaterialParameterBlendSettingsList;
    
    USCLevelSequenceDirectorData();
};

