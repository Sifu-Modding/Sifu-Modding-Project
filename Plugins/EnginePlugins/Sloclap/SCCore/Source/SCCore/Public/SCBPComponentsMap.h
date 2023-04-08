#pragma once
#include "CoreMinimal.h"
#include "SCBPComponentsMap.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct SCCORE_API FSCBPComponentsMap {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEnum*> m_ComponentsEnums;
    
public:
    FSCBPComponentsMap();
};

