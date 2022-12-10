#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ResourcesTexturesData.generated.h"

class UTexture2D;

UCLASS()
class SIFU_API UResourcesTexturesData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText m_FragmentText;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_FragmentTexture;
    
    UResourcesTexturesData();
};

