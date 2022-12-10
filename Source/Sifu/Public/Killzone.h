#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Killzone.generated.h"

class AActor;
class UPrimitiveComponent;
class UBoxComponent;
class AFightingCharacter;

UCLASS()
class SIFU_API AKillzone : public AStaticMeshActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UBoxComponent* m_BoxComponent;
    
public:
    AKillzone();
private:
    UFUNCTION()
    void OnBoxTouched(UPrimitiveComponent* _OverlappedComp, AActor* _Other, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool BPF_IsKillzoneActive();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnBoxTouched(AFightingCharacter* _Char, const FVector& _vImpactpoint);
    
};

