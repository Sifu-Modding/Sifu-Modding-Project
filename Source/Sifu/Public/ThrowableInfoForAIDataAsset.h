#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "ThrowableInfoForAIDataAsset.generated.h"

class AThrowableActor;

UCLASS(Blueprintable)
class SIFU_API UThrowableInfoForAIDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AThrowableActor>> m_ThrowableInfo;
    
    UThrowableInfoForAIDataAsset();
};

