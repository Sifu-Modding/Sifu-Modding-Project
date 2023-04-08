#pragma once
#include "CoreMinimal.h"
#include "LipSyncEmotionData.h"
#include "LipSyncPhonemeInPhrase.h"
#include "SCPoolableActorComponent.h"
#include "LipSync_TimedData.h"
#include "TextLipSync.h"
#include "CharacterTextLipSync.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UCharacterTextLipSync : public UTextLipSync, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
   /* UCharacterTextLipSync();
    UFUNCTION(BlueprintCallable)
    void BPF_Speak(const FLipSync_TimedData& _phrase, const TArray<FLipSyncPhonemeInPhrase>& _phonemes, const TArray<FLipSyncEmotionData>& _emotions, UAkAudioEvent* _audioEvent, TMap<float, float> _enveloppeValueByTime, bool _bUseImprovedTextToPhoneme);
    */
    
    // Fix for true pure virtual functions not being implemented
};

