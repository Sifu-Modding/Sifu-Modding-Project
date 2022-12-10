#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemEffects.h"
#include "EItemUseState.h"
#include "Engine/EngineTypes.h"
#include "UsableItem.generated.h"

class UShapeComponent;

UCLASS()
class SIFU_API AUsableItem : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UShapeComponent* m_ShapeComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_ItemAttackName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FItemEffects> m_Effects;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMatchesWithAvoid;
    
public:
    AUsableItem();
    UFUNCTION(BlueprintPure)
    EItemUseState BPF_GetItemUseState() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    float BPF_ComputeAttackKnockbackCoeff(AActor* _Instigator, AActor* Target, const FHitResult& _hitResult) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_InterruptItemUseAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_InstantUse();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_EndUsePhase();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_EndItemUseAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_BeginUsePhase();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_BeginItemUseAction();
    
};

