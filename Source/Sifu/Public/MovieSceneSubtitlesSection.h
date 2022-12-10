#pragma once
#include "CoreMinimal.h"
//#include "MovieSceneAkAudioEventSection.h"
#include "MovieSceneSubtitlesSection.generated.h"

UCLASS()
class SIFU_API UMovieSceneSubtitlesSection : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FText Subtitle;
    
    UPROPERTY(EditAnywhere)
    bool m_bIsMCSpeaking;
    
public:
    UMovieSceneSubtitlesSection();
};

