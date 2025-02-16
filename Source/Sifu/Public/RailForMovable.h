#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RailForMovable.generated.h"

class UBoxComponent;
class USplineComponent;

UCLASS(Blueprintable)
class SIFU_API ARailForMovable : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_Rail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_EntryBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedThreshold;
    
public:
    ARailForMovable(const FObjectInitializer& ObjectInitializer);

};

