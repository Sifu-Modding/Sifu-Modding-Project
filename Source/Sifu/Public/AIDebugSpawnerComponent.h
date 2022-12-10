#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIDebugSpawnerInstance.h"
#include "AIDebugSpawnerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIDebugSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FAIDebugSpawnerInstance> m_Spawners;
    
    UAIDebugSpawnerComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnAIs(int32 _iCoun);
    
};

