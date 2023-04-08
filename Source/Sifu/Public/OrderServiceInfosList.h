#pragma once
#include "CoreMinimal.h"
#include "OrderServiceInfos.h"
#include "OrderServiceInserted.h"
#include "Templates/SubclassOf.h"
#include "OrderServiceInfosList.generated.h"

class UOrderPresetDB;

USTRUCT(BlueprintType)
struct SIFU_API FOrderServiceInfosList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UOrderPresetDB>> m_Presets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOrderServiceInfos> m_Services;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOrderServiceInserted> m_InsertedServices;
    
    FOrderServiceInfosList();
};

