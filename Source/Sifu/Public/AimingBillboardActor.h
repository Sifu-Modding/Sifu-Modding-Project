#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SCActor.h"
#include "AimingBillboardActor.generated.h"

class AActor;
class AAimingBillboardActor;
class UBoxComponent;

UCLASS(Blueprintable)
class SIFU_API AAimingBillboardActor : public ASCActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectionChangedDyn, bool, _bSelected, AAimingBillboardActor*, aimingBillboard);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnSelectionChangedDyn OnSelectionChangedDyn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebug;
    
public:
    AAimingBillboardActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetActorOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector2D BPE_ComputeSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BPE_ComputeScore(FVector _v3DPointToTest) const;
    
};

