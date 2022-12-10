#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SCConditionnalAnimContainer.h"
#include "AnimContainer.h"
#include "RandomAnimDB.generated.h"

class AActor;

UCLASS(BlueprintType)
class SIFU_API URandomAnimDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSCConditionnalAnimContainer> m_Anims;
    
    URandomAnimDB();
    UFUNCTION(BlueprintCallable)
    FAnimContainer BPF_PickRandomAnim(AActor* _requester);
    
};

