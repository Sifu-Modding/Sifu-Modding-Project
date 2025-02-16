#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HitActionLauncher.h"
#include "HitBox.h"
#include "FallHitActionLauncher.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UFallHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMCIsInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHitOnInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_HitOnInstigator;
    
    UFallHitActionLauncher();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_GetDirection(AActor* _Instigator, AActor* _victim, FVector& _vOutStartDirection, FVector& _vOutTargetDirection, bool& _bOutForceStartDirection);
    
};

