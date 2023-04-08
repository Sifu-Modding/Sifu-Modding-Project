#pragma once
#include "CoreMinimal.h"
#include "GameplayOptionsMenu.h"
#include "GraphOptionsMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UGraphOptionsMenu : public UGameplayOptionsMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iCurrentResIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> m_ResList;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetCameraInStartIdlePosition;
    
public:
    UGraphOptionsMenu();
private:
    UFUNCTION(BlueprintCallable)
    void OnRequestUIChange();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_ResolutionChanged(int32 _iIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetCurrentDisplayMode();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AutoDetectSettings();
    
    UFUNCTION(BlueprintCallable)
    void BPF_AcceptSetting();
    
};

