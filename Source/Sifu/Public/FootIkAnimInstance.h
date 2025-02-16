#pragma once
#include "CoreMinimal.h"
#include "SCFootIkAnimInstance.h"
#include "EFightingActionState.h"
#include "ESCSignificanceBuckets.h"
#include "FootIkAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SIFU_API UFootIkAnimInstance : public USCFootIkAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFightingActionState> m_eHandledActionStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExcludeActionStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFightingActionState> m_eHipsHandledActionStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExcludeHipsActionStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCSignificanceBuckets m_eMinSignificanceRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<ESCSignificanceBuckets> m_ePerServiceMinSignificanceRequired;
    
public:
    UFootIkAnimInstance();

};

