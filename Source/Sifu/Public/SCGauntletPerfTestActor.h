#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCGauntletPerfTestActor.generated.h"

class ASCTestingLocationsBase;

UCLASS()
class SIFU_API ASCGauntletPerfTestActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditInstanceOnly)
    TArray<ASCTestingLocationsBase*> m_TestingLocations;
    
public:
    ASCGauntletPerfTestActor();
};

