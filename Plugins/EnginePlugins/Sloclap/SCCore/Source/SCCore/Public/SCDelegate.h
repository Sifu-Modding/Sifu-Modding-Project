#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCDelegate.generated.h"

// Declare a global delegate type
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDynamicMulticast);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGenericDialogEventDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDialogLineEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMulticastDelegateActorDyn);

UCLASS(Blueprintable)
class SCCORE_API USCDelegate : public UObject {
    GENERATED_BODY()
public:
    USCDelegate();

    UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnPreSaveLevel;

    UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FGenericDialogEventDelegate OnGenericDialogEvent;

    UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnReCreatedPhysicsState;
    
    UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast m_OnGoToTimeCompleted;

    UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnDialogCompleted;
    
    UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnDialogCut;
    
    UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDialogLineEvent OnLineEnded;
    
    UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FMulticastDelegateActorDyn OnAbandonning;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FMulticastDelegateActorDyn m_onActorLeftSmartLink;
    
    UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnGiveInitialControlToPlayer;
    
    UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnCancel;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnMatchHasStarted;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnMatchHasEnded;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnLeavingMap;

     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnGotoGameplaySequenceStarted;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnGotoGameplaySequenceFinished;

         UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnScoreMultiplierChanged;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnEnemyPresenceInsideHardpointChanged;

     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnScoreDecreaseStarted;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnScoreDecreaseEnded;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnObjectiveStart;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast ObjectiveStartTimerElapsedDelegate;
    
      UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnAllHardpointsClearedOnce;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast m_OnModelReset;

        UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnLanding;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnFalling;

                UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnSuccess;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnFailure;

     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnInputAvailable;

    UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast m_OnDemoFinishPlayback;

     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast OnRemoveSlapstick;
    
     UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast m_OnActionStateChangedDyn;
    
    UPROPERTY(BlueprintAssignable, Category = "Delegate")
        FDynamicMulticast m_OnAttackLaunchedDynamic;
};

