#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseActorTargetConditionInstance.h"
#include "InteractionHintInfo.h"
#include "Templates/SubclassOf.h"
#include "InteractionDetectionComponent.generated.h"

class AActor;
class UInteractionObjectComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UInteractionDetectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorTargetConditionInstance m_CandidateObjectCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAngleThresholdWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAngleThresholdRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCatchFrontRangeWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCatchBackRangeWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCatchFrontRangeRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCatchBackRangeRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInteractionHintDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowOnlyVisibleHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowOnlyUsableHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInteractionObjectComponent*> m_interactionHintToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UInteractionObjectComponent*, FInteractionHintInfo> m_interactionHintInfos;
    
public:
    UInteractionDetectionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<UInteractionObjectComponent*, FInteractionHintInfo> BPF_GetInteractionHintInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UInteractionObjectComponent*> BPF_GetInteractionHintComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetCurrentInteractiveObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInteractionObjectComponent* BPF_GetCurrentInteractiveComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_DisableInteractionWithObjects(TSubclassOf<AActor> _actorToDisable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_AllowInteractionWithObjects(TSubclassOf<AActor> _actorToEnable);
    
};

