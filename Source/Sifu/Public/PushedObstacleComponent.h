#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPushObstacleReaction.h"
#include "HitBox.h"
#include "PushedObstacleComponent.generated.h"

class AFightingCharacter;
class UPushedObstacleComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPushedObstacleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPushSignature, UPushedObstacleComponent*, _component, AFightingCharacter*, _pushedPlayer);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bActive;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPushObstacleReaction m_ePushReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitBox;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPushSignature m_OnPushDetected;
    
    UPushedObstacleComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPushInterruption(AFightingCharacter* _interruptedCharacter);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    EPushObstacleReaction BPE_GetPushReaction(AFightingCharacter* _pushedPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_GetPushInterruptionHit(AFightingCharacter* _interruptedCharacter, FHitBox& _inOutResult);
    
};

