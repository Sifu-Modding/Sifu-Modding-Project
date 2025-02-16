#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TargetSettings.h"
#include "TargetSettingsDB.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UTargetSettingsDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetSettings m_Settings;
    
    UTargetSettingsDB();

};

