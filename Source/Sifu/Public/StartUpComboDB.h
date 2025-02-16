#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StartUpComboDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UStartUpComboDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboSlotNames;
    
    UStartUpComboDB();

};

