#pragma once
#include "CoreMinimal.h"
#include "EQuadrantTypes.h"
#include "InputAction.h"
#include "AttackRequest.generated.h"

class UAttackDB;
class UCombo;

USTRUCT(BlueprintType)
struct FAttackRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuadrantTypes m_eCurrentQuadrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ComboState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombo* m_Combo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iComboNodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStartRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackDB* m_AttackDB;
    
    SIFU_API FAttackRequest();
};

