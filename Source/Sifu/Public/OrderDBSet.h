#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "OrderDBSet.generated.h"

class UOrderDB;

UCLASS(Blueprintable)
class SIFU_API UOrderDBSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UOrderDB>> m_Orders;
    
    UOrderDBSet();
};

