#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "RagdollNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API URagdollNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bRagdollEnabled;
    
    UPROPERTY(EditAnywhere)
    bool m_bCollisionEnabled;
    
public:
    URagdollNotify();
};

