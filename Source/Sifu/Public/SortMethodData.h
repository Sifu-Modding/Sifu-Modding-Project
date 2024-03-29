#pragma once
#include "CoreMinimal.h"
#include "SortMethodData.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSortMethodData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_Name;
    
    FSortMethodData();
};

