#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SCUserDefinedEnumHandler.h"
#include "HittedDeathNotify.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UHittedDeathNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_DeathAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_DeathAnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMirrorDeathAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUnspawnNow;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiDeathTriggeredConditionMask;
    
    UHittedDeathNotify();
};

