#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SCAnimInstanceBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class SCCORE_API USCAnimInstanceBase : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsReplayScrubSnapshotCompatible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AnimInstanceUpdateEnable, meta=(AllowPrivateAccess=true))
    bool m_bAnimInstanceUpdateEnabled;
    
public:
    USCAnimInstanceBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AnimInstanceUpdateEnable();
    
};

