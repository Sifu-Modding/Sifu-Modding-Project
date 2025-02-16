#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AnimContainer.h"
#include "SCConditionnalAnimContainer.h"
#include "RandomAnimDB.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API URandomAnimDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCConditionnalAnimContainer> m_Anims;
    
    URandomAnimDB();

    UFUNCTION(BlueprintCallable)
    FAnimContainer BPF_PickRandomAnim(AActor* _requester);
    
};

