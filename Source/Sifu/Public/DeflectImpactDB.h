#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DeflectImpact.h"
#include "DeflectImpactDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UDeflectImpactDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeflectImpact m_DeflectImpact;
    
    UDeflectImpactDB();

};

