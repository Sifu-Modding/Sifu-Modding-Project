#pragma once
#include "CoreMinimal.h"
#include "LipSync_TimedData.h"
#include "SCPoolableActorComponent.h"
#include "TextLipSync.h"
#include "LipSyncEmotionData.h"
#include "LipSyncPhonemeInPhrase.h"
#include "CharacterTextLipSync.generated.h"

class UAkAudioEvent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UCharacterTextLipSync : public UTextLipSync, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
   /* UCharacterTextLipSync();
    UFUNCTION(BlueprintCallable)
    void BPF_Speak(const FLipSync_TimedData& _phrase, const TArray<FLipSyncPhonemeInPhrase>& _phonemes, const TArray<FLipSyncEmotionData>& _emotions, UAkAudioEvent* _audioEvent, TMap<float, float> _enveloppeValueByTime, bool _bUseImprovedTextToPhoneme);
    */
    
    // Fix for true pure virtual functions not being implemented
};

