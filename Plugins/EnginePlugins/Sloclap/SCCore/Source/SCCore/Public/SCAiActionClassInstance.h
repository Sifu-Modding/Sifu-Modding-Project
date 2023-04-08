#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SCAiActionClassInstance.generated.h"

class USCAiAction;

USTRUCT(BlueprintType)
struct SCCORE_API FSCAiActionClassInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USCAiAction> m_DefaultClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCAiAction* m_Instance;
    
    FSCAiActionClassInstance();
};

