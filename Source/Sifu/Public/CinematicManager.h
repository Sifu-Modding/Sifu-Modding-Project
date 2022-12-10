#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CinematicManager.generated.h"

UCLASS()
class SIFU_API UCinematicManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float m_fFadeDuration;
    
public:
    UCinematicManager();
private:
    UFUNCTION()
    void MovieStopped();
    
};

