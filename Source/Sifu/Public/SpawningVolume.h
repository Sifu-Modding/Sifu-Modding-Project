#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawningVolume.generated.h"

class UShapeComponent;

UCLASS()
class SIFU_API ASpawningVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UShapeComponent* m_ShapeComponent;
    
    UPROPERTY(EditAnywhere)
    bool m_bAllowSpawnIfCharacterOverlaps;
    
    UPROPERTY(EditAnywhere)
    bool m_bSpawnIfNothingUnder;
    
    UPROPERTY(EditAnywhere)
    float m_fSecurityMargin;
    
public:
    ASpawningVolume();
};

