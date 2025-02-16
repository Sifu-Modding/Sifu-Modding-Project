#pragma once
#include "CoreMinimal.h"
#include "Engine/WindDirectionalSource.h"
#include "SCWindDirectionalSource.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable)
class SCCORE_API ASCWindDirectionalSource : public AWindDirectionalSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* m_MPC;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_windDirectionName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_windSpeedName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_windMinGustName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_windMaxGustName;
    
    ASCWindDirectionalSource(const FObjectInitializer& ObjectInitializer);

};

