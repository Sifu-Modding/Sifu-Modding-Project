#pragma once
#include "CoreMinimal.h"
#include "SCActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AimingBillboardActor.generated.h"

class AAimingBillboardActor;
class UBoxComponent;
class AActor;

UCLASS()
class SIFU_API AAimingBillboardActor : public ASCActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectionChangedDyn, bool, _bSelected, AAimingBillboardActor*, aimingBillboard);
    
    UPROPERTY(BlueprintAssignable, Transient)
    FOnSelectionChangedDyn OnSelectionChangedDyn;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBoxComponent* m_BoxComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool m_bDebug;
    
public:
    AAimingBillboardActor();
    UFUNCTION(BlueprintPure)
    float BPF_GetScore() const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetActorOwner() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector2D BPE_ComputeSize() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float BPE_ComputeScore(FVector _v3DPointToTest) const;
    
};

