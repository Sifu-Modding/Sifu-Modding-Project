#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SoundReplicationData.h"
#include "ReplaySoundReplication.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API UReplaySoundReplication : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundReplicationData m_SoundReplicationData;
    
    UReplaySoundReplication();

    UFUNCTION()
    void SetRTPCValue(uint32 _rtpc, const FString& _rtpcName, float _akRtpcValue, int32 _iInterpolationTimeMs, AActor* _actor);
    
};

