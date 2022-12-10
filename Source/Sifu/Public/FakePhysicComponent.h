#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "FakePhysicComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UFakePhysicComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_fZImpulse;
    
    UPROPERTY(EditAnywhere)
    float m_fImpulseReduc;
    
    UPROPERTY(EditAnywhere)
    FVector m_vAngularImpulse;
    
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UPrimitiveComponent* m_OverlappingComponent;
    
    UFakePhysicComponent();
protected:
    UFUNCTION()
    void NotifyBeginOverlap(UPrimitiveComponent* _OverlappedComp, AActor* _Other, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _OverlapInfo);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetOverlappingComponent(UPrimitiveComponent* _primComp);
    
};

