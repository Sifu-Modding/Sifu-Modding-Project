#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SCPoolableActorsContainerPoolEntry.h"
#include "Templates/SubclassOf.h"
#include "SCPoolableActorsContainer.generated.h"

class ASCCharacterImpostor;

UCLASS(Blueprintable)
class SCCORE_API ASCPoolableActorsContainer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCPoolableActorsContainerPoolEntry> m_Pools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iGenerationVersion;
    
public:
    ASCPoolableActorsContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 BPF_GetActorsCount(TSubclassOf<AActor> _class);
    
    UFUNCTION(BlueprintCallable)
    ASCCharacterImpostor* BPF_AddCharacterImpostor(FName _poolName, bool _bRenameWithPoolName);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddActors(TSubclassOf<AActor> _class, int32 _iCount, TArray<AActor*>& _outCreatedActors, FName _poolName);
    
    UFUNCTION(BlueprintCallable)
    AActor* BPF_AddActor(TSubclassOf<AActor> _class, FName _poolName, bool _bRenameWithPoolName);
    
};

