#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
#include "AttachWeapon_Notify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UAttachWeapon_Notify : public USCAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_sBoneToAttachWeaponTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFakie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsEndReattachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAttachInFakieIfCancelledFromThisNotify;
    
    UAttachWeapon_Notify();
};

