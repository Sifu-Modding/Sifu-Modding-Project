#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCPoolableActor.h"
#include "SCActor.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCActor : public AActor, public ISCPoolableActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsStreamable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsPooled;
    
public:
    ASCActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

