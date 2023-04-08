#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplayCutManagement.generated.h"

class UReplayKey;
class UReplayTimelineModel;

UCLASS(Blueprintable)
class SIFU_API UReplayCutManagement : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayTimelineModel* m_Model;
    
public:
    UReplayCutManagement();
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveCut(UReplayKey* _key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_CanAddCut(float _fDemoTime) const;
    
};

