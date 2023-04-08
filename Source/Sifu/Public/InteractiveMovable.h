#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SCActor.h"
#include "EDebugMovableState.h"
#include "InputAction.h"
#include "Templates/SubclassOf.h"
#include "InteractiveMovable.generated.h"

class AActor;
class AFightingCharacter;
class UInteractiveDestructionComponent;
class UMovableInteractionComponent;
class USCSaveGameComponent;
class USCStreamingActorComponent;
class UTargetSettingsDB;

UCLASS(Abstract, Blueprintable)
class SIFU_API AInteractiveMovable : public ASCActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCStreamingActorComponent* m_StreamingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableSreamingEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovableInteractionComponent* m_InteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractiveDestructionComponent* m_DestructibleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCSaveGameComponent* m_SaveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAngularFallingSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLinearFallingSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsBreakSilent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTargetSettingsDB> m_throwTargetSettingsDB;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> m_TmpTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTransform m_SavedTransform;
    
public:
    AInteractiveMovable();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedFromSaveCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnPreSaveLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetInstigator(AActor* _Instigator);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetActivate(bool _bActivated);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsReadyToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BPF_GetPivotLoc() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetInstigator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BPF_GetHUDLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDebugMovableState BPF_GetDebugMovableState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ShowMovableInteractions();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnUsabilityUpdated(bool _bUsable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnObjectBreak(bool _bIsSilent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HideMovableInteractions();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HasHitChara();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FText BPE_GetHUDActionText(bool& _bUsable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    InputAction BPE_FindAppropriateActionFromContext(AFightingCharacter* _user) const;
    
};

