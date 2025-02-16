#pragma once
#include "CoreMinimal.h"
#include "CreditCompanyStruct.h"
#include "MenuWidget.h"
#include "CreditsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UCreditsWidget : public UMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fScrollFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iScrollPixelPerSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedFactorWithStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fScrollTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreditCompanyStruct> m_Companies;
    
public:
    UCreditsWidget();

};

