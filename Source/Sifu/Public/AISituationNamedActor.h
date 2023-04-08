#pragma once
#include "CoreMinimal.h"
#include "AISituationNamedActor.generated.h"

USTRUCT(BlueprintType)
struct FAISituationNamedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    SIFU_API FAISituationNamedActor();
};

