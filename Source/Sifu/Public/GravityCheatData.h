#pragma once
#include "CoreMinimal.h"
#include "CheatData.h"
#include "GravityCheatData.generated.h"

UCLASS(Blueprintable)
class SIFU_API UGravityCheatData : public UCheatData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsGravityEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWantedGravityScale;
    
public:
    UGravityCheatData();

};

