#pragma once
#include "CoreMinimal.h"
#include "AIActionAttack.h"
#include "Templates/SubclassOf.h"
#include "AIActionRainDashes.generated.h"

class UAIActionDash;

UCLASS(Abstract, Blueprintable)
class SIFU_API UAIActionRainDashes : public UAIActionAttack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDistanceForFinalDash;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 m_iMaxNumberOfDashes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIActionDash> m_FirstDashLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIActionDash> m_FirstDashRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIActionDash> m_IntermediateDashLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIActionDash> m_IntermediateDashRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIActionDash> m_FinalDash;
    
    UAIActionRainDashes();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_OnFinishDash();
    
};

