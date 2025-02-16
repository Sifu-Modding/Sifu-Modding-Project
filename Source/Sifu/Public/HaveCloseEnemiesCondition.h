#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "HaveCloseEnemiesCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UHaveCloseEnemiesCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTestMaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDist;
    
    UHaveCloseEnemiesCondition();

};

