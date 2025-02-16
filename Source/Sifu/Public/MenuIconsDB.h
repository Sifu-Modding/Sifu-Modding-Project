#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ControllerIcons.h"
#include "EquipmentCategoryInfos.h"
#include "MenuIconsDB.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class SIFU_API UMenuIconsDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_EquipmentSlotDefaultIcons[11];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_EquipmentSlotSelectedIcons[11];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> m_ItemDefaultIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> m_ItemSelectedIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_EmptyMiniWeaponIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> m_FightingStyleMiniIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerIcons> m_ControllerIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerIcons m_DefaultControllerIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentCategoryInfos m_EmptyWeaponFamilyInfos;
    
    UMenuIconsDB();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FControllerIcons GetControllerIcons(FName _controllerType) const;
    
};

