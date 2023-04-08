#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InheritedDataAsset.generated.h"

class UInheritedDataAsset;

UCLASS(Abstract, Blueprintable)
class SCCORE_API UInheritedDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInheritedDataAsset* m_Parent;
    
    UInheritedDataAsset();
};

