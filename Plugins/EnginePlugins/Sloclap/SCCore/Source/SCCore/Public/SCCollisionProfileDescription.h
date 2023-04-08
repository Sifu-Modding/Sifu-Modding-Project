#pragma once
#include "CoreMinimal.h"
#include "SCCollisionResponseTemplate.h"
#include "SCCollisionProfileDescription.generated.h"

USTRUCT(BlueprintType)
struct FSCCollisionProfileDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponseTemplate m_Template;
    
    SCCORE_API FSCCollisionProfileDescription();
};

