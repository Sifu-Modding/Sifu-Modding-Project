#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "AISanctuaryComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAISanctuaryComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FInt32Range m_RangeNbOfEnnemies;
    
    UPROPERTY(EditAnywhere)
    bool m_bSanctuaryHasLimitedDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fSanctuaryDuration;
    
    UPROPERTY(EditAnywhere)
    bool m_bSendBarkEventWhenSanctuaryIsSafe;
    
public:
    UAISanctuaryComponent();
};

