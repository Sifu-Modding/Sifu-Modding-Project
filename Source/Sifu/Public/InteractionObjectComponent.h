#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCPoolableActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "InteractionTextStruct.h"
#include "InteractionObjectComponent.generated.h"

class APlayerController;
class UInteractionObjectComponent;
class UOrderParams;
class USceneComponent;
class UPrimitiveComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UInteractionObjectComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUseObject, APlayerController*, PlayerController);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsableChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTextStructChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFailedUseObject, APlayerController*, PlayerController, FText, FailReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestroyComponent, UInteractionObjectComponent*, _component);
    
    UPROPERTY(BlueprintAssignable)
    FUseObject OnUseInteractionObject;
    
    UPROPERTY(BlueprintAssignable)
    FFailedUseObject OnUseInteractionObjectFailed;
    
    UPROPERTY(BlueprintAssignable)
    FUseObject OnBecomeCurrentInteractionObject;
    
    UPROPERTY(BlueprintAssignable)
    FUseObject OnNoLongerCurrentInteractionObject;
    
    UPROPERTY(BlueprintAssignable)
    FOnTextStructChanged OnTextChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnUsableChanged OnUsableChanged;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomWalkInteractionDist;
    
    UPROPERTY(EditAnywhere)
    float m_fCustomWalkInteractionDist;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseCustomRunInteractionDist;
    
    UPROPERTY(EditAnywhere)
    float m_fCustomRunInteractionDist;
    
    UPROPERTY(BlueprintAssignable)
    FDestroyComponent OnDestroyComponent;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCollisionProfileName m_InteractionTraceResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIgnoreOwnerOnHint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bIgnoreChildActorsOnTrace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UOrderParams* m_orderParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bVisibleOnlyWhenUsable;
    
private:
    UPROPERTY(EditAnywhere)
    bool m_bIsUsable;
    
    UPROPERTY(EditAnywhere)
    FInteractionTextStruct m_InteractionTextStruct;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseLockedText;
    
    UPROPERTY(EditAnywhere)
    FText m_LockedText;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseGenericUI;
    
    UPROPERTY(EditAnywhere)
    int32 m_iPriority;
    
    UPROPERTY(EditAnywhere)
    bool m_bUseInteractionHint;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideInteractionHintDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fInteractionHintDistanceOverride;
    
    UPROPERTY(EditAnywhere)
    bool m_bConstraintToViewport;
    
    UPROPERTY(EditAnywhere)
    FVector2D m_vViewportConstraint;
    
public:
    UInteractionObjectComponent();
protected:
    UFUNCTION()
    void ForceUse();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetVisualComponent(USceneComponent* _component);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetMainDetectionPrimitive(UPrimitiveComponent* _component);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetIsUsable(bool _bCanUse);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetInteractionTextStruct(const FInteractionTextStruct& _struct);
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsUsingLockedText() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_IsUsable() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* BPF_GetVisualComponent() const;
    
    UFUNCTION(BlueprintPure)
    FText BPF_GetLockedText() const;
    
    UFUNCTION(BlueprintPure)
    FInteractionTextStruct BPF_GetInteractionTextStruct() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

