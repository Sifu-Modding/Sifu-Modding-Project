#pragma once
#include "CoreMinimal.h"
#include "OrderDB.h"
#include "OrderAttackDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UOrderAttackDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRepulsionSpeed;
    
    UOrderAttackDB();

};

