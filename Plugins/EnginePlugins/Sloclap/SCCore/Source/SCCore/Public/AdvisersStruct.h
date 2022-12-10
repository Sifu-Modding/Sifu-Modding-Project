#pragma once
#include "CoreMinimal.h"
#include "SCTechAdviserEnumHandler.h"
#include "SCDataAdviserEnumHandler.h"
#include "AdvisersStruct.generated.h"

USTRUCT(BlueprintType)
struct FAdvisersStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCTechAdviserEnumHandler m_techAdviser;
    
    UPROPERTY(EditAnywhere)
    FSCDataAdviserEnumHandler m_dataAdviser;
    
    SCCORE_API FAdvisersStruct();
};

