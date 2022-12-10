#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneRetargetingOverrideTemplate.generated.h"

class UMovieSceneRetargetingOverrideSection;

USTRUCT()
struct FMovieSceneRetargetingOverrideTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UMovieSceneRetargetingOverrideSection* Section;
    
public:
    SIFU_API FMovieSceneRetargetingOverrideTemplate();
};

