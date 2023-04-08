#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "SCSpectatorPawnBase.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class SIFU_API ASCSpectatorPawnBase : public ASpectatorPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_VerticalStrifeSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVerticalStrifeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fLookSpeed;
    
public:
    ASCSpectatorPawnBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAnyInputConsumed();
    
};

