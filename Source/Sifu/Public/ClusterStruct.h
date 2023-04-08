#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ClusterStruct.generated.h"

class AThrowableActor;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FClusterStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_MeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AThrowableActor> m_ThrowableSubClass;
    
    SIFU_API FClusterStruct();
};

