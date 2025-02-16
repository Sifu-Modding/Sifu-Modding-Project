#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OrderServiceInfos.h"
#include "OrderPresetDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UOrderPresetDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOrderServiceInfos> m_Services;
    
    UOrderPresetDB();

};

