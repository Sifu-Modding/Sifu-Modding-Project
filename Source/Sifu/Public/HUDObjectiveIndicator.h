#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EGlobalBehaviors.h"
#include "HUDUserWidget.h"
#include "HUDObjectiveIndicator.generated.h"

class AFightingCharacter;
class UCanvasPanelSlot;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UHUDObjectiveIndicator : public UHUDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFightingCharacter* m_TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_targetSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vEllipseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_v2dOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_v3dOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* m_indicatorPanelSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_indicatorArrowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsShown;
    
public:
    UHUDObjectiveIndicator();

private:
    UFUNCTION(BlueprintCallable)
    void OnTargetBehaviorChanged(EGlobalBehaviors _NewBehavior, const bool _bFromDialog);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetTarget(AFightingCharacter* _target);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnShownStateChanged();
    
};

