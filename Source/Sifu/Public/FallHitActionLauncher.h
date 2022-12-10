#pragma once
#include "CoreMinimal.h"
#include "HitActionLauncher.h"
#include "HitBox.h"
#include "UObject/NoExportTypes.h"
#include "FallHitActionLauncher.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UFallHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bMCIsInstigator;
    
    UPROPERTY(EditAnywhere)
    bool m_bHitOnInstigator;
    
    UPROPERTY(EditAnywhere)
    FHitBox m_HitOnInstigator;
    
    UFallHitActionLauncher();
    UFUNCTION(BlueprintNativeEvent)
    void BPE_GetDirection(AActor* _Instigator, AActor* _victim, FVector& _vOutStartDirection, FVector& _vOutTargetDirection, bool& _bOutForceStartDirection);
    
};

