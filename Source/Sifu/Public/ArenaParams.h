#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ArenaParams.generated.h"

class UArenaChallengeDescription;

USTRUCT(BlueprintType)
struct FArenaParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UArenaChallengeDescription>> m_ChallengesList;
    
    SIFU_API FArenaParams();
};

