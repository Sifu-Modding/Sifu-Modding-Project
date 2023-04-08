#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ThrowObjectNotify.h"
#include "ThrowMultipleObjectsNotify.generated.h"

class AThrowableActor;

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UThrowMultipleObjectsNotify : public UThrowObjectNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHorizontalAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_uiNbThrowables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AThrowableActor> m_ThrowableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBreakThrowableAfterThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVerticalOffsetSpawnPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVerticalOffsetTargetDirection;
    
    UThrowMultipleObjectsNotify();
};

