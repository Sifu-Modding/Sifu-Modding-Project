#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=CheatData -FallbackName=CheatData
#include "GravityCheatData.generated.h"

UCLASS()
class SIFU_API UGravityCheatData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIsGravityEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_fWantedGravityScale;
    
public:
    UGravityCheatData();
};

