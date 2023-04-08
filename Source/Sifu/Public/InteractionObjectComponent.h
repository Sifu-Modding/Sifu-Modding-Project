#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/CollisionProfile.h"
#include "SCPoolableActorComponent.h"
#include "InteractionTextStruct.h"
#include "InteractionObjectComponent.generated.h"

class APlayerController;
class UInteractionObjectComponent;
class UOrderParams;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UInteractionObjectComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUseObject, APlayerController*, PlayerController);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUsableChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTextStructChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFailedUseObject, APlayerController*, PlayerController, FText, FailReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestroyComponent, UInteractionObjectComponent*, _component);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUseObject OnUseInteractionObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFailedUseObject OnUseInteractionObjectFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUseObject OnBecomeCurrentInteractionObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUseObject OnNoLongerCurrentInteractionObject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextStructChanged OnTextChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUsableChanged OnUsableChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomWalkInteractionDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCustomWalkInteractionDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomRunInteractionDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCustomRunInteractionDist;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDestroyComponent OnDestroyComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_InteractionTraceResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreOwnerOnHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreChildActorsOnTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOrderParams* m_orderParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bVisibleOnlyWhenUsable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionTextStruct m_InteractionTextStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseLockedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_LockedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseGenericUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseInteractionHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideInteractionHintDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInteractionHintDistanceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bConstraintToViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_vViewportConstraint;
    
public:
    UInteractionObjectComponent();
protected:
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsUsingLockedText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsUsable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* BPF_GetVisualComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetLockedText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInteractionTextStruct BPF_GetInteractionTextStruct() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

