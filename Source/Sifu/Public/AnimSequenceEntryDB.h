#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AnimSequenceDBEntry.h"
#include "Templates/SubclassOf.h"
#include "AnimSequenceEntryDB.generated.h"

class ABaseWeapon;

UCLASS(Blueprintable)
class SIFU_API UAnimSequenceEntryDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABaseWeapon> m_WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimSequenceDBEntry> m_AnimSequences;
    
    UAnimSequenceEntryDB();

};

