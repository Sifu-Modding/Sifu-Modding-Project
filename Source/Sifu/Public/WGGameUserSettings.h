#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
//#include "UDLSSMode.h"
#include "WGGameUserSettings.generated.h"

UCLASS(Config=User)
class SIFU_API UWGGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
   /* UPROPERTY(Config)
    UDLSSMode DLSSQuality;*/
    
    UWGGameUserSettings();
};

