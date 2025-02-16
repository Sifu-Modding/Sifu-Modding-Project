#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "AIActionEventNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UAIActionEventNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EventName;
    
public:
    UAIActionEventNotify();

};

