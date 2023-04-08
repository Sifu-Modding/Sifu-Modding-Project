#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "ComboTransitions.h"
#include "ComboStartNode.generated.h"

USTRUCT(BlueprintType)
struct FComboStartNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_EnumState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboTransitions m_ComboTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PhaseName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_uiMCDominationFlags;
    
    SIFU_API FComboStartNode();
};

