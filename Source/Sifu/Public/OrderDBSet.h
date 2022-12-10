#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "OrderDBSet.generated.h"

class UOrderDB;

UCLASS()
class SIFU_API UOrderDBSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UOrderDB>> m_Orders;
    
    UOrderDBSet();
};

