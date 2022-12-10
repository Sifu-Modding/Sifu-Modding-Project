#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplayCutManagement.generated.h"

class UReplayKey;
class UReplayTimelineModel;

UCLASS(BlueprintType)
class SIFU_API UReplayCutManagement : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UReplayTimelineModel* m_Model;
    
public:
    UReplayCutManagement();
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveCut(UReplayKey* _key);
    
    UFUNCTION(BlueprintPure)
    bool BPF_CanAddCut(float _fDemoTime) const;
    
};

