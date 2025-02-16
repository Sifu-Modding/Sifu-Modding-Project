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
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iReplayMaxSizeStopRecordingTolerance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iReplayTotalMaxSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iTotalSaveGameSpaceAvailableForReplays;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iDesktopTotalSaveGameSpaceAvailableForReplays;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iReplayEditorMedataDataSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_iReplayFileMetaDataSize;
    
public:
    UReplaySaveGame();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString BPE_GetTitleInfoForSaveFile(const FString& _fileName, bool _bIsMetaData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString BPE_GetSubtitlesInfoForSaveFile(bool _bIsMetaData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTexture2D* BPE_GetIconForSaveFile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString BPE_GetDetailsInfoForSaveFile(bool _bIsMetaData) const;
    
};

