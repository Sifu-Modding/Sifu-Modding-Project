#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ECharacterTraversalType.h"
#include "ETraversalEntryType.h"
#include "TraversalInfo.generated.h"

class UTraversalComponent;

USTRUCT(BlueprintType)
struct FTraversalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTraversalComponent> m_traversalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vTraversalStartPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vTraversalEndPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTraversalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTraversalHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraversalEntryType m_eEntryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterTraversalType m_eType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bClimbWithFence;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTraversalComponent> m_TraversalFenceOnTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bTraversalOnStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult m_FirstImpactOnTraversal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bValidStartPos;
    
    SIFU_API FTraversalInfo();
};

