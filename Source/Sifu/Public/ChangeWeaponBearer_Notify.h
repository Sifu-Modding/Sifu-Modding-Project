#pragma once
#include "CoreMinimal.h"
#include "EWeaponOrientationConstraint.h"
#include "SCAnimNotify.h"
#include "ChangeWeaponBearer_Notify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UChangeWeaponBearer_Notify : public USCAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_sBoneToAttachWeaponTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponOrientationConstraint m_eWeaponConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bKeepAttachedOnImpostor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_sBoneToAttachWeaponToOnImpostor;
    
    UChangeWeaponBearer_Notify();

};

