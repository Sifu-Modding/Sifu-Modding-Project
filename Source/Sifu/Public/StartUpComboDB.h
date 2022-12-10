#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StartUpComboDB.generated.h"

UCLASS()
class SIFU_API UStartUpComboDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> m_ComboSlotNames;
    
    UStartUpComboDB();
};

