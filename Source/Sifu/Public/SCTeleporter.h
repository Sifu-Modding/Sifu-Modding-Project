#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCTeleporter.generated.h"

class UBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class SIFU_API ASCTeleporter : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_RootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_EntryBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
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

