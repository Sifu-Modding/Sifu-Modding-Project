#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScreenTextureData.h"
#include "ScreenTextureDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UScreenTextureDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScreenTextureData> m_ScreenTextures;
    
    UScreenTextureDB();

};

