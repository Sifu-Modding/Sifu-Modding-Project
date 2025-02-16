#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SCCollisionResponsePreset.h"
#include "EPushableState.h"
#include "InteractiveMovable.h"
#include "PushableActor.generated.h"

class AActor;
class AFightingCharacter;
class ASCPlayerController;
class UBoxComponent;
class UPushObjMovementComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class SIFU_API APushableActor : public AInteractiveMovable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateUpdated, EPushableState, _eNewState);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFallingVelocityReduc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vFallingVelocityOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vViewMargin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateUpdated OnStateUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPushObjMovementComponent* m_MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_InteractionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_PivotLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_fColProfileAtRest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCCollisionResponsePreset m_fColProfilePushed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fUsabilityAngleRestriction;
    
public:
    APushableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BPF_SetPushableState(EPushableState _eNewState);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Push(const AFightingCharacter* _character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetTarget(const AFightingCharacter* _character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPushableState BPF_GetPushableState() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D BPF_GetLeftStickValues(ASCPlayerController* _playerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_AngleBetweenMoveInputAndObject(const AFightingCharacter* _character) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPushed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HasHitWall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FBox BPE_GetMovementBox(const AFightingCharacter* _player) const;
    
};

