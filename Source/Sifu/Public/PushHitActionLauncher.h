#pragma once
#include "CoreMinimal.h"
#include "HitActionLauncher.h"
#include "Templates/SubclassOf.h"
#include "PushHitActionLauncher.generated.h"

class UNavigationQueryFilter;
class UPushConfiguration;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UPushHitActionLauncher : public UHitActionLauncher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPushConfiguration* m_PushConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitActionLauncher* m_fallbackHitAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxAIWallDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> m_filterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bForceAIPushDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fForcedAILocalDirectionAngle;
    
    UPushHitActionLauncher();
};

