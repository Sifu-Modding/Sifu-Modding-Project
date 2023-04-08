#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECoordinateSystem.h"
#include "EDropNotifyApplyMode.h"
#include "EDropReason.h"
#include "SCAnimNotify.h"
#include "DropWeaponNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UDropWeaponNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bImpulseInLocalSocketSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoordinateSystem m_eImpulseCharacterSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDropNotifyApplyMode m_ApplyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDropReason m_eDropReason;
    
public:
    UDropWeaponNotify();
};

