#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPlatform -FallbackName=EPlatform
#include "ControllerAxisIcons.h"
#include "ControllerKeyIcons.h"
#include "ControllerIcons.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FControllerIcons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_Controllers;
    
   /* UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlatform> m_Platforms;*/
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerKeyIcons> m_KeyIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControllerAxisIcons> m_AxisIcons;
    
    FControllerIcons();
};

