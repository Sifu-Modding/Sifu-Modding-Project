#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIDebugSpawnerInstance.h"
#include "AIDebugSpawnerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIDebugSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDebugSpawnerInstance> m_Spawners;
    
    UAIDebugSpawnerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_SpawnAIs(int32 _iCoun);
    
};

