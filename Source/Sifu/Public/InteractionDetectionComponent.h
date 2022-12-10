#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "BaseActorTargetConditionInstance.h"
#include "InteractionHintInfo.h"
#include "InteractionDetectionComponent.generated.h"

class UInteractionObjectComponent;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UInteractionDetectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FBaseActorTargetConditionInstance m_CandidateObjectCondition;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAngleThresholdWalking;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAngleThresholdRunning;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCatchFrontRangeWalking;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCatchBackRangeWalking;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCatchFrontRangeRunning;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCatchBackRangeRunning;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInteractionHintDist;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bShowOnlyVisibleHint;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bShowOnlyUsableHint;
    
    UPROPERTY(Instanced, Transient)
    TArray<UInteractionObjectComponent*> m_interactionHintToShow;
    
    UPROPERTY(Transient)
    TMap<UInteractionObjectComponent*, FInteractionHintInfo> m_interactionHintInfos;
    
public:
    UInteractionDetectionComponent();
    UFUNCTION(BlueprintPure)
    TMap<UInteractionObjectComponent*, FInteractionHintInfo> BPF_GetInteractionHintInfos() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UInteractionObjectComponent*> BPF_GetInteractionHintComponent() const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetCurrentInteractiveObject() const;
    
    UFUNCTION(BlueprintPure)
    UInteractionObjectComponent* BPF_GetCurrentInteractiveComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisableInteractionWithObjects(TSubclassOf<AActor> _actorToDisable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AllowInteractionWithObjects(TSubclassOf<AActor> _actorToEnable);
    
};

