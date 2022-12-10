#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ArchetypeSituationDescription.h"
#include "ArchetypeSituationDB.generated.h"

UCLASS()
class SIFU_API UArchetypeSituationDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FArchetypeSituationDescription> m_ArchetypesInSituation;
    
    UArchetypeSituationDB();
};

