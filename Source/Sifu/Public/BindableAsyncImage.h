#pragma once
#include "CoreMinimal.h"
#include "GetAsyncTextureAssetDelegate.h"
#include "Blueprint/UserWidget.h"
#include "AsyncTextureStruct.h"
#include "BindableAsyncImage.generated.h"

class UAsyncImage;

UCLASS(EditInlineNew)
class UBindableAsyncImage : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UAsyncImage* m_AsyncImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FAsyncTextureStruct AsyncTexture;
    
    UPROPERTY()
    FGetAsyncTextureAsset AsyncTextureDelegate;
    
public:
    UBindableAsyncImage();
};

