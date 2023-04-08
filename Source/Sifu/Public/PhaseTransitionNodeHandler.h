#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "AISituationNamedActor.h"
#include "EAIPhaseLevelSequenceTransform.h"
#include "Templates/SubclassOf.h"
#include "PhaseTransitionNodeHandler.generated.h"

class UAIPhaseTransition;
class ULevelSequence;
class USynchronizedAttackHitActionLauncher;

USTRUCT(BlueprintType)
struct FPhaseTransitionNodeHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPhaseTransition* m_TransitionObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNeedsLastManGaugeFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_PhaseTransitionAnimContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USynchronizedAttackHitActionLauncher> m_SyncHitActionLauncher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* m_LevelSequence;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIPhaseLevelSequenceTransform m_LevelSequenceTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISituationNamedActor m_LevelSequenceTransformActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iChildNodeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResetHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResetStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResetSuperDizzy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bResetCurrentAIActions;
    
    SIFU_API FPhaseTransitionNodeHandler();
};

