#pragma once
#include "CoreMinimal.h"
#include "SCActor.h"
#include "VitalPointDataDefinition.h"
#include "VitalPointActor.generated.h"

class AActor;
class AAimingBillboardActor;
class AVitalPointActor;

UCLASS(Blueprintable)
class SIFU_API AVitalPointActor : public ASCActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVitalSelectionChangedDyn, bool, _bSelected, AVitalPointActor*, vitalPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVitalPointValidated, AVitalPointActor*, vitalPoint);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnVitalSelectionChangedDyn OnSelectionChangedDyn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnVitalPointValidated OnVitalPointValidated;
    
    AVitalPointActor();
private:
    UFUNCTION(BlueprintCallable)
    void OnBillBoardSelectionChanged(bool _bSelected, AAimingBillboardActor* _billboard);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVitalPointDataDefinition BPF_GetDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetActorOwner() const;
    
};

