#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AICustomBehaviorTreeList.h"
#include "AIPhaseNodeHardLink.h"
#include "EAIPhaseNodeType.h"
#include "PhaseTransitionNodeHandler.h"
#include "Templates/SubclassOf.h"
#include "PhaseNodeHandler.generated.h"

class UArchetypeAsset;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPhaseNodeHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPhaseNodeHardLink m_Link;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArchetypeAsset> m_PhaseArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArchetypeAsset> m_WeakerPhaseArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UArchetypeAsset> m_StrongerPhaseArchetype;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_OverrideSkeletalMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIPhaseNodeType m_eType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAICustomBehaviorTreeList m_CustomBehaviorTrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DialogToLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhaseTransitionNodeHandler> m_PhaseTransitions;
    
    SIFU_API FPhaseNodeHandler();
};

