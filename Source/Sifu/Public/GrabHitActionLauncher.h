#pragma once
#include "CoreMinimal.h"
#include "HitActionLauncher.h"
#include "Templates/SubclassOf.h"
#include "GrabHitActionLauncher.generated.h"

class UDefenseAnimRequest;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UGrabHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDefenseAnimRequest> m_overridenDefenseRequest;
    
public:
    UGrabHitActionLauncher();
};

