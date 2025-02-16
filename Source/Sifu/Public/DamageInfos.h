#pragma once
#include "CoreMinimal.h"
#include "DamageInfos.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDamageInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTakenDown;
    
    SIFU_API FDamageInfos();
};

