#pragma once
#include "CoreMinimal.h"
#include "HUDUserWidget.h"
#include "HUDArena.generated.h"

class UBaseArenaObjective;
class UHUDObjectiveIndicator;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UHUDArena : public UHUDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> m_chronoTextes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseArenaObjective* m_arenaObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHUDObjectiveIndicator*> m_group1Indicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHUDObjectiveIndicator*> m_group2Indicators;
    
public:
    UHUDArena();

    UFUNCTION(BlueprintCallable)
    void BPF_UnregisterIndicatorWidget(UHUDObjectiveIndicator* _widget);
    
    UFUNCTION(BlueprintCallable)
    void BPF_RegisterIndicatorWidget(UHUDObjectiveIndicator* _widget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShowChrono(bool _bShow);
    
};

