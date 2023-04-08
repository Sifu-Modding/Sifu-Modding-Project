#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "NetOrderStructTraversal.h"
#include "OrderDB.h"
#include "OrderTraversalDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UOrderTraversalDB : public UOrderDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanBeHitted;
    
    UOrderTraversalDB();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_HittedFallOnSlopeEntryAnim(const FNetOrderStructTraversal& _netOrderStruct, FAnimContainer& _outResult) const;
    
};

