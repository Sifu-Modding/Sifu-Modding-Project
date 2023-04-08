#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCPoolableActorsContainerPoolEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SCCORE_API FSCPoolableActorsContainerPoolEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_Actors;
    
    FSCPoolableActorsContainerPoolEntry();
};

