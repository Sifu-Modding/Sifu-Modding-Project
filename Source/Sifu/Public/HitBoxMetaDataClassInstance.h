#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitBoxMetaDataClassInstance.generated.h"

class UHitBoxMetaData;

USTRUCT(BlueprintType)
struct SIFU_API FHitBoxMetaDataClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHitBoxMetaData> m_DefaultClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitBoxMetaData* m_Instance;
    
    FHitBoxMetaDataClassInstance();
};

