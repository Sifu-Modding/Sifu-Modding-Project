#pragma once
#include "CoreMinimal.h"
#include "NetStructOpeningDoor.h"
#include "OrderParams.h"
#include "OrderOpeningDoorParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOrderOpeningDoorParams : public UOrderParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetStructOpeningDoor m_Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNetStructOpeningDoor m_TransientParams;
    
    UOrderOpeningDoorParams();
};

