#pragma once
#include "CoreMinimal.h"
#include "ETraversalEntryType.h"
#include "NetOrderStructTraversal.h"
#include "OrderParams.h"
#include "OrderTraversalParams.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOrderTraversalParams : public UOrderParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetOrderStructTraversal m_Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNetOrderStructTraversal m_TransientParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ETraversalEntryType m_eForceEntryType;
    
    UOrderTraversalParams();

};

