#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GhostAnimInstance.generated.h"

class UAnimationAsset;

UCLASS(NonTransient)
class SIFU_API UGhostAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    TWeakObjectPtr<UAnimationAsset> m_MasterAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    float m_fMasterAnimCurrentCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    bool m_bMasterAnimMirror;
    
    UGhostAnimInstance();
};

