#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState_Trail.h"
#include "TrailNotifyStateExtended.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UTrailNotifyStateExtended : public UAnimNotifyState_Trail {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool m_bCheckInPerfectLink;
    
    UPROPERTY(EditAnywhere)
    bool m_bCheckNotInPerfectLink;
    
    UPROPERTY(EditAnywhere)
    FString m_BaseName;
    
public:
    UTrailNotifyStateExtended();
};

