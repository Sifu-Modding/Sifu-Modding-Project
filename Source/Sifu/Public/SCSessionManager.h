#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SCSessionManager.generated.h"

class USCTrackingAuthentication;

UCLASS()
class SIFU_API USCSessionManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    USCTrackingAuthentication* m_TrackingAuthenticationComponent;
    
public:
    USCSessionManager();
};

