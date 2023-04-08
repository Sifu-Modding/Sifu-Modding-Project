#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ControllerAxisIcons.h"
#include "ControllerIcons.h"
#include "ControllerKeyIcons.h"
#include "EAvoidType.h"
#include "EGameModeTypes.h"
#include "EIconStyle.h"
#include "EParrySide.h"
#include "EQuadrantTypes.h"
#include "EquipmentCategoryInfos.h"
#include "IconTextures.h"
#include "MenuDB.generated.h"

class UAkAudioEvent;
class UTexture2D;

UCLASS(Blueprintable)
class SIFU_API UMenuDB : public UDataAsset {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* m_AudioMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* m_AudioValidate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* m_AudioBack;*/
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentCategoryInfos m_EquipmentSlotInfos[11];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipmentCategoryInfos> m_ItemSlotInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentCategoryInfos m_EmptyCategoryInfos;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_AvoidIcons[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_ParryIcons[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_AbsorIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_GuardBreakIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_DiscipleIcon;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquipmentCategoryInfos m_GameModeInfos[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerIcons> m_ControllerIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerIcons m_DefaultControllerIcons;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_QuadrantSelectionIcons[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FIconTextures m_QuadrantIcons[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FIconTextures m_StanceIcons[4];
    
    UMenuDB();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* BPF_GetStanceIcon(EQuadrantTypes _eQuadrant, EIconStyle _eIconStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* BPF_GetQuadrantSelectionIcon(EQuadrantTypes _eQuadrant) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* BPF_GetQuadrantIcon(EQuadrantTypes _eQuadrant, EIconStyle _eIconStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetGameModeInfos(const EGameModeTypes _eGameMode, FEquipmentCategoryInfos& _outInfos) const;
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_GetControllerKeyIconDesc(const FControllerKeyIcons& _slot);
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_GetControllerIconsDesc(const FControllerIcons& _icons);
    
    UFUNCTION(BlueprintCallable)
    static FString BPF_GetControllerAxisIconDesc(const FControllerAxisIcons& _slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetAttackParryIcon(EParrySide _eParrySide) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> BPF_GetAttackAvoidIcon(EAvoidType _eAvoidType) const;
    
};

