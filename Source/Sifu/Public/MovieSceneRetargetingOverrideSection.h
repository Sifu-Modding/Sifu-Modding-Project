#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneRetargetingOverrideSection.generated.h"

class UWGRetargetingOverrideData;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneRetargetingOverrideSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWGRetargetingOverrideData* m_RetargetingOverrideData;
    
    UMovieSceneRetargetingOverrideSection();

};

