#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SocialManager.generated.h"

UCLASS()
class SIFU_API USocialManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_fCoopResolutionTimeOut;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCoopResolutionReturningPvETimeOut;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NbNeededPlayersPerGameMode[3];
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NbMaxPlayersPerGameMode[3];
    
public:
    USocialManager();
};

