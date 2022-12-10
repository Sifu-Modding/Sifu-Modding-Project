#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "MovieSceneSubtitlesTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieSceneSubtitlesTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneSubtitlesTrack();
    
    // Fix for true pure virtual functions not being implemented
};

