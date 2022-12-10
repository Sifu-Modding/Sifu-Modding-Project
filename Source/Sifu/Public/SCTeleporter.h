#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCTeleporter.generated.h"

class USceneComponent;
class UBoxComponent;

UCLASS()
class SIFU_API ASCTeleporter : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USceneComponent* m_RootComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxComponent* m_EntryBoxComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBoxComponent* m_ExitBoxComponent;
    
public:
    ASCTeleporter();
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveActorToTeleport(AActor* _leavingActor);
    
    UFUNCTION(BlueprintCallable)
    void BPF_LaunchTeleport();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddActorToTeleport(AActor* _actorToTeleport);
    
};

