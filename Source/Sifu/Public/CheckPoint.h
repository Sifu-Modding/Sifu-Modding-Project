#pragma once
#include "CoreMinimal.h"
#include "SCPlayerStart.h"
#include "Engine/EngineTypes.h"
#include "CheckPoint.generated.h"

class UBoxComponent;
class AActor;
class UPrimitiveComponent;

UCLASS()
class SIFU_API ACheckPoint : public ASCPlayerStart {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* m_TriggerCheckpointEnter;
    
public:
    ACheckPoint();
private:
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetNewCheckPointInSave();
    
};

