#pragma once
#include "CoreMinimal.h"
#include "PictoData.h"
#include "Engine/DataAsset.h"
#include "EGearRarity.h"
#include "SequenceCheckPointData.h"
#include "LootBoxOpeningSequenceDB.generated.h"

UCLASS(BlueprintType)
class SIFU_API ULootBoxOpeningSequenceDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EGearRarity, FPictoData> m_pictosData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSequenceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSequenceEnd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSequenceCheckPointData> m_sequenceCheckPointsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLoopPlayBackStartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fLoopPlayBackEndPosition;
    
    ULootBoxOpeningSequenceDB();
};

