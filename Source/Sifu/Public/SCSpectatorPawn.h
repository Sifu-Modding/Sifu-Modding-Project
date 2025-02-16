#pragma once
#include "CoreMinimal.h"
#include "SCSpectatorPawnBase.h"
#include "SCSpectatorPawn.generated.h"

UCLASS(Blueprintable)
class SIFU_API ASCSpectatorPawn : public ASCSpectatorPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedFactorModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFOVModifier;
    
    ASCSpectatorPawn(const FObjectInitializer& ObjectInitializer);

};

