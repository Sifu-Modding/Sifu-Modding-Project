#pragma once
#include "CoreMinimal.h"
#include "SCVolume.h"
#include "EAlertLevel.h"
#include "AISanctuaryVolume.generated.h"

class UAISanctuaryComponent;

UCLASS()
class SIFU_API AAISanctuaryVolume : public ASCVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UAISanctuaryComponent* m_SanctuaryComponent;
    
    AAISanctuaryVolume();
private:
    UFUNCTION()
    void OnSanctuaryAssignmentUpdated();
    
    UFUNCTION()
    void OnAlertLevelChanged(EAlertLevel _eNewLevel);
    
};

