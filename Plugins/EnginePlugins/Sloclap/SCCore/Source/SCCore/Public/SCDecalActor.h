#pragma once
#include "CoreMinimal.h"
#include "Engine/DecalActor.h"
#include "SCPoolableActor.h"
#include "SCDecalActor.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCDecalActor : public ADecalActor, public ISCPoolableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsPooled;
    
public:
    ASCDecalActor();
    
    // Fix for true pure virtual functions not being implemented
};

