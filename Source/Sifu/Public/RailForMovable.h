#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RailForMovable.generated.h"

class USplineComponent;
class UBoxComponent;

UCLASS()
class SIFU_API ARailForMovable : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USplineComponent* m_Rail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBoxComponent* m_EntryBox;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fSpeedThreshold;
    
public:
    ARailForMovable();
};

