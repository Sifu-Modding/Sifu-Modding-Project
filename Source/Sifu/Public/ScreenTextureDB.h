#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScreenTextureData.h"
#include "ScreenTextureDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API UScreenTextureDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FScreenTextureData> m_ScreenTextures;
    
    UScreenTextureDB();
};

