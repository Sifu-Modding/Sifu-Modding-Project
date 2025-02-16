#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SCAnimInstance.h"
#include "IKPropertyEvaluation.h"
#include "PropertyFloorBoneRepartition.h"
#include "IKSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SIFU_API UIKSubAnimInstance : public USCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SlopeCurveName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FRotator m_FloorAngleToTarget;
    
public:
    UIKSubAnimInstance();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void BPF_BindRepartitionProperty(UPARAM(Ref) FPropertyFloorBoneRepartition& _property);
    
    UFUNCTION(BlueprintCallable)
    void BPF_BindProperty(UPARAM(Ref) FIKPropertyEvaluation& _fProperty, uint8 _uiEnum);
    
};

