#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "MovieSceneRetargetingOverrideTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieSceneRetargetingOverrideTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<UMovieSceneSection*> m_Sections;
    
public:
    UMovieSceneRetargetingOverrideTrack();
    
    // Fix for true pure virtual functions not being implemented
};

