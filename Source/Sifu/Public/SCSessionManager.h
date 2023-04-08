#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCSessionManager.generated.h"

class USCTrackingAuthentication;

UCLASS(Blueprintable)
class SIFU_API USCSessionManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCTrackingAuthentication* m_TrackingAuthenticationComponent;
    
public:
    USCSessionManager();
};

