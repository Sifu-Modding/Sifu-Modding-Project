#pragma once
#include "CoreMinimal.h"
#include "InheritedDataAsset.h"
#include "VitalPointDataDefinition.h"
#include "VitalPointDB.generated.h"

class UVitalPointDB;

UCLASS(Blueprintable)
class UVitalPointDB : public UInheritedDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVitalPointDB* m_BaseVitalPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVitalPointDataDefinition> m_VitalPointDefinitionArray;
    
    UVitalPointDB();

};

