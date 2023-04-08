#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCTrackingConfig.generated.h"

UCLASS(Blueprintable, Config=Game)
class SCTRACKING_API USCTrackingConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ShippingApiEndpoint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_DevApiEndpoint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ApiEventPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ApiTrackingLevelPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ApiHealthPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ApiKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ApiHealthPathSteamOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ApiEventPathSteamOverride;
    
    USCTrackingConfig();
};

