#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "SCPoolableActorComponent.h"
#include "BaseComponent.h"
#include "EFallLevel.h"
#include "EMoveStatus.h"
#include "ESpeedState.h"
#include "ETraversalPhase.h"
#include "Templates/SubclassOf.h"
#include "TraversalInfo.h"
#include "FightingMovementComponent.generated.h"

class AActor;
class UAnimSequence;
class UBaseMovementDB;
class UEffectData;
class UTraversalDB;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UFightingMovementComponent : public UCharacterMovementComponent, public IBaseComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTraversalHintUsable, const FTraversalInfo&, currentTraversalInfo, bool, bUsable);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPenetrationExpulsionSpeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraversalHintUsable m_OnTraversalHintUsable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveStatus m_eMoveStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseMovementDB* m_BaseMovementDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverlapOnRemoveCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bPushForceScaledToMassInNavWalking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInitialPushForceFactorInNavWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPushForceFactorInNavWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFlyModeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFlyModeRushSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTraversalDB> m_TraversalInfosDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> m_LastDodgeAnims;
    
public:
    UFightingMovementComponent();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPopDesyncFromServer(uint8 _uiResyncID);
    
    UFUNCTION(BlueprintCallable)
    void OnEffectAddedOrRemovedCallback(bool _bAdded, UEffectData* _effectData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRealVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRealSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRealHorizontalVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRealHorizontalSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMoveStatus(EMoveStatus _eMoveStatus);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ResetBaseMovementDBToDefault();
    
    UFUNCTION(BlueprintCallable)
    void BPF_PushBlockV2(AActor* _blocker);
    
    UFUNCTION(BlueprintCallable)
    void BPF_PopBlockV2(AActor* _blocker);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OverrideBaseMovementDB(UBaseMovementDB* _newBaseMovementDB);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsRushing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BPF_GetTraversalHintPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BPF_GetLastWantedDir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFreeMoveSpeed(const FVector& _vLocalDir, const float _fGlobalIntensity, const ESpeedState& _eSpeedState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFreeMoveOverallAnimSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFreeMoveMinSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFreeMoveMaxSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetFreeMoveAnimSpeed(ESpeedState _eSpeedState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFallLevel BPF_GetFallLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETraversalPhase BPF_GetCurrentTraversalPhase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpeedState BPF_GetCurrentSpeedState() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

