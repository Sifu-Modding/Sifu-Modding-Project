#pragma once
#include "CoreMinimal.h"
#include "SCErrorPopup.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FSCErrorPopup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_TextMessage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_TextConfirm;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_TextCancel;
    
    FSCErrorPopup();
};

