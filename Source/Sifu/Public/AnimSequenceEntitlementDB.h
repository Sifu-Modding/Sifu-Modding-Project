#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AnimSequenceEntitlementDB.generated.h"

class UAnimSequenceEntryDB;

UCLASS(Blueprintable)
class SIFU_API UAnimSequenceEntitlementDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_AvailableForEntitlements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceEntryDB*> m_DBs;
    
    UAnimSequenceEntitlementDB();
};

