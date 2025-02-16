#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CheatData.h"
#include "HitBoxToChangeBehavior.h"
#include "LargeHitBoxCheatData.generated.h"

UCLASS(Blueprintable)
class SIFU_API ULargeHitBoxCheatData : public UCheatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vGlobalHitBoxCustomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitBoxToChangeBehavior> m_ApplyCustomScaleHitBoxes;
    
    ULargeHitBoxCheatData();

};

