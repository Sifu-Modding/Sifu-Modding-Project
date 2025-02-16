#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCGauntletPerfTestActor.generated.h"

class ASCTestingLocationsBase;

UCLASS(Blueprintable)
class SIFU_API ASCGauntletPerfTestActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASCTestingLocationsBase*> m_TestingLocations;
    
public:
    ASCGauntletPerfTestActor(const FObjectInitializer& ObjectInitializer);

};

