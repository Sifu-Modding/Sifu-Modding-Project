#pragma once
#include "CoreMinimal.h"
#include "DestructibleStateInfo.generated.h"

class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FDestructibleStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iHealthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* m_StateStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_StateSkeletalMesh;
    
    SIFU_API FDestructibleStateInfo();
};

