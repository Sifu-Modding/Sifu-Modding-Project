#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneRetargetingOverrideSection.generated.h"

class UWGRetargetingOverrideData;

UCLASS(MinimalAPI)
class UMovieSceneRetargetingOverrideSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWGRetargetingOverrideData* m_RetargetingOverrideData;
    
    UMovieSceneRetargetingOverrideSection();
};

