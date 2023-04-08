#pragma once
#include "CoreMinimal.h"
#include "SCDataAdviserEnumHandler.h"
#include "SCTechAdviserEnumHandler.h"
#include "AdvisersStruct.generated.h"

USTRUCT(BlueprintType)
struct FAdvisersStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCTechAdviserEnumHandler m_techAdviser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCDataAdviserEnumHandler m_dataAdviser;
    
    SCCORE_API FAdvisersStruct();
};

