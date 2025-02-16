#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "TransitionAnimMetadata.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UTransitionAnimMetadata : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iLastPrevDirectionMarkerIndex;
    
    UTransitionAnimMetadata();

};

