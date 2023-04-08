#pragma once
#include "CoreMinimal.h"
#include "DefenseAnimInfos.h"
#include "DefenderAnimInfos.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FDefenderAnimInfos : public FDefenseAnimInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bParryToStructureBrokenDisableReorient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bParryToDizzyDisableReorient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bParrySuccessDisableReorient;
    
    FDefenderAnimInfos();
};

