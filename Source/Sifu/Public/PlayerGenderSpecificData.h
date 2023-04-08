#pragma once
#include "CoreMinimal.h"
#include "OutfitData.h"
#include "PlayerGenderSpecificData.generated.h"

class UBaseMovementDB;
class USCCharacterPoseData;

USTRUCT(BlueprintType)
struct FPlayerGenderSpecificData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOutfitData> m_Outfits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBaseMovementDB> m_BaseMovementDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USCCharacterPoseData> m_PoseData;
    
    SIFU_API FPlayerGenderSpecificData();
};

