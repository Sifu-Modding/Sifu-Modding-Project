#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OrderServiceInfos.h"
#include "OrderPresetDB.generated.h"

UCLASS()
class SIFU_API UOrderPresetDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FOrderServiceInfos> m_Services;
    
    UOrderPresetDB();
};

