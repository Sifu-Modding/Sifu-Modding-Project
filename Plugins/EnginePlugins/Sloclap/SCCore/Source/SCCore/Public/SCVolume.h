#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "VolumeBounds.h"
#include "Engine/EngineTypes.h"
#include "SCVolume.generated.h"

class ASCVolume;
class AActor;
class UPrimitiveComponent;

UCLASS()
class SCCORE_API ASCVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TArray<ASCVolume*> m_ChildrenVolumes;
    
    UPROPERTY(BlueprintReadOnly)
    FVolumeBounds m_CachedVolumeBounds;
    
private:
    UPROPERTY(Transient)
    ASCVolume* m_ParentVolume;
    
public:
    ASCVolume();
protected:
    UFUNCTION()
    void InternalOnComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION()
    void InternalOnComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    
public:
    UFUNCTION(BlueprintPure)
    FVolumeBounds GetVolumeBounds() const;
    
    UFUNCTION(BlueprintCallable)
    void CacheBounds();
    
};

