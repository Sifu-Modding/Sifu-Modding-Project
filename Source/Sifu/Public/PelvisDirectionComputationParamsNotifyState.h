#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "PelvisDirectionComputationParams.h"
#include "PelvisDirectionComputationParamsNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UPelvisDirectionComputationParamsNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPelvisDirectionComputationParams m_Params;
    
public:
    UPelvisDirectionComputationParamsNotifyState();
};

