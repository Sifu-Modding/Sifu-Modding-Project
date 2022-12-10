#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TargetableFactions.h"
#include "FactionsManager.generated.h"

UCLASS()
class SIFU_API UFactionsManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FTargetableFactions m_FactionsTargetTable[6];
    
public:
    UFactionsManager();
};

