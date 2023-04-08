#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "SCAITicketEnum.generated.h"

USTRUCT(BlueprintType)
struct FSCAITicketEnum : public FSCUserDefinedEnumHandler {
    GENERATED_BODY()
public:
    SIFU_API FSCAITicketEnum();
};
FORCEINLINE uint32 GetTypeHash(const FSCAITicketEnum) { return 0; }

