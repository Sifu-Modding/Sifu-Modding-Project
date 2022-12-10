#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplaySaveGame.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class SIFU_API UReplaySaveGame : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int64 m_iReplayMaxSizeStopRecordingTolerance;
    
    UPROPERTY(EditDefaultsOnly)
    int64 m_iReplayTotalMaxSize;
    
    UPROPERTY(EditDefaultsOnly)
    int64 m_iTotalSaveGameSpaceAvailableForReplays;
    
    UPROPERTY(EditDefaultsOnly)
    int64 m_iReplayEditorMedataDataSize;
    
    UPROPERTY(EditDefaultsOnly)
    int64 m_iReplayFileMetaDataSize;
    
public:
    UReplaySaveGame();
    UFUNCTION(BlueprintImplementableEvent)
    FString BPE_GetTitleInfoForSaveFile(const FString& _fileName, bool _bIsMetaData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FString BPE_GetSubtitlesInfoForSaveFile(bool _bIsMetaData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    UTexture2D* BPE_GetIconForSaveFile() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FString BPE_GetDetailsInfoForSaveFile(bool _bIsMetaData) const;
    
};

