#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCDlcConfig.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCDlcConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    USCDlcConfig();

};

