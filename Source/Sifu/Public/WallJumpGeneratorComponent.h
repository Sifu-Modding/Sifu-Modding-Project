#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCPoolableActorComponent.h"
#include "Components/ActorComponent.h"
#include "GeneratedWallInfos.h"
#include "WallJumpGeneratorComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UWallJumpGeneratorComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fMinWallLength;
    
    UPROPERTY(EditAnywhere)
    float m_fDetectionDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxSegmentVerticalAngle;
    
    UPROPERTY(EditAnywhere)
    float m_fLeanHeight;
    
    UPROPERTY(EditAnywhere)
    float m_fMaxWallAngleDegree;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iWallActorCount;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> m_ActorClass;
    
private:
    UPROPERTY()
    TArray<FGeneratedWallInfos> m_Walls;
    
public:
    UWallJumpGeneratorComponent();
    
    // Fix for true pure virtual functions not being implemented
};

