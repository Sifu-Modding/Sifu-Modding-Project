#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneRetargetingOverrideTemplate.generated.h"

class UMovieSceneRetargetingOverrideSection;

USTRUCT(BlueprintType)
struct FMovieSceneRetargetingOverrideTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneRetargetingOverrideSection* Section;
    
public:
    SIFU_API FMovieSceneRetargetingOverrideTemplate();
};

