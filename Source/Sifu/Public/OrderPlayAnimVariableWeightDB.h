#pragma once
#include "CoreMinimal.h"
#include "OrderDB.h"
#include "OrderPlayAnimVariableWeightDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UOrderPlayAnimVariableWeightDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUpdateQuadrant;
    
    UOrderPlayAnimVariableWeightDB();
};

