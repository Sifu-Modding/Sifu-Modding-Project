#pragma once
#include "CoreMinimal.h"
#include "SCVolume.h"
#include "EAlertLevel.h"
#include "AISanctuaryVolume.generated.h"

class UAISanctuaryComponent;

UCLASS(Blueprintable)
class SIFU_API AAISanctuaryVolume : public ASCVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAISanctuaryComponent* m_SanctuaryComponent;
    
    AAISanctuaryVolume();
private:
    UFUNCTION(BlueprintCallable)
    void OnSanctuaryAssignmentUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnAlertLevelChanged(EAlertLevel _eNewLevel);
    
};

