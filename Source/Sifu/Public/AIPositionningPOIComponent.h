#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIPositionningPOI.h"
#include "AIPositionningPOIComponent.generated.h"

class AAISpawner;
class AFightingCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAIPositionningPOIComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPositionningPOI m_Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawner*> m_AllowedSpawners;
    
public:
    UAIPositionningPOIComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_SetData(const FAIPositionningPOI& _data, const TArray<AAISpawner*>& _allowedSpawners);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFightingCharacter* BPF_GetOccupant() const;
    
};

