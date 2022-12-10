#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "TransitionAnimMetadata.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class SIFU_API UTransitionAnimMetadata : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_iLastPrevDirectionMarkerIndex;
    
    UTransitionAnimMetadata();
};

