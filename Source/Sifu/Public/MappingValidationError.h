#pragma once
#include "CoreMinimal.h"
#include "EMappingValidationErrorType.h"
#include "MappingID.h"
#include "MappingValidationError.generated.h"

class UGenericInputData;

USTRUCT(BlueprintType)
struct FMappingValidationError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappingValidationErrorType m_eResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMappingID m_ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMappingID m_CollideID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenericInputData* m_CollideWithData;
    
    SIFU_API FMappingValidationError();
};

