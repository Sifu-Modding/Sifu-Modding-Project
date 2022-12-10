#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MovieWidget.generated.h"

class UMediaPlayer;
class UMediaTexture;
class UImage;

UCLASS(EditInlineNew)
class SIFU_API UMovieWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndReached);
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UMediaTexture* m_MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Transient)
    UImage* m_WidgetTorender;
    
    UPROPERTY(BlueprintAssignable)
    FOnEndReached OnEndReached;
    
private:
    UPROPERTY(Transient)
    UMediaPlayer* m_MediaPlayer;
    
public:
    UMovieWidget();
private:
    UFUNCTION()
    void MediaOpenedCallback(const FString& _url);
    
    UFUNCTION()
    void MediaEndCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    bool BPF_OpenMovie(const FString& _url, bool _bLooping);
    
    UFUNCTION(BlueprintCallable)
    void BPF_CloseMovie();
    
};

