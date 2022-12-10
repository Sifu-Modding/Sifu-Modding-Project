#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ClusterStruct.generated.h"

class UStaticMeshComponent;
class AThrowableActor;

USTRUCT(BlueprintType)
struct FClusterStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UStaticMeshComponent* m_MeshComp;
    
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<AThrowableActor> m_ThrowableSubClass;
    
    SIFU_API FClusterStruct();
};

