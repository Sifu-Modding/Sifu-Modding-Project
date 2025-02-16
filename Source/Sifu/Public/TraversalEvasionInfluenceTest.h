#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "ETraversalEntryType.h"
#include "TraversalEvasionInfluenceTest.generated.h"

UCLASS(Blueprintable)
class SIFU_API UTraversalEvasionInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideTraversalEntryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraversalEntryType m_eTraversalEntry;
    
public:
    UTraversalEvasionInfluenceTest();

};

