#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ReplayReplicationComponentBase -FallbackName=ReplayReplicationComponentBase
#include "MovieSceneSequencePlayer.h"
#include "ESequenceState.h"
#include "InGameSequenceReplicationInfo.h"
#include "InGameSequenceReplication.generated.h"

class ULevelSequence;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UInGameSequenceReplication : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InGameSequenceReplicationInfo, meta=(AllowPrivateAccess=true))
    TArray<FInGameSequenceReplicationInfo> m_InGameSequenceReplicationInfo;
    
public:
    UInGameSequenceReplication();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InGameSequenceReplicationInfo();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_RecordInGameSequence(const UObject* _worldContextObject, ULevelSequence* _sequence, FMovieSceneSequencePlaybackParams _playbackParams, ESequenceState _eState);
    
};

