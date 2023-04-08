#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "ChangeCollisionNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UChangeCollisionNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableCollisions;
    
public:
    UChangeCollisionNotify();
};

