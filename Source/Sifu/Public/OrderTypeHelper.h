#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OrderType.h"
#include "EOrderType.h"
#include "EditableOrderType.h"
#include "OrderTypeHelper.generated.h"

class ABaseCharacter;

UCLASS(BlueprintType)
class SIFU_API UOrderTypeHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderTypeHelper();
    UFUNCTION(BlueprintPure)
    static FOrderType MakeOrderTypeFromEnum(EOrderType _eOrderType);
    
    UFUNCTION(BlueprintPure)
    static FOrderType MakeOrderTypeFromBP(const ABaseCharacter* _owner, FName _OrderType);
    
   /* UFUNCTION(BlueprintPure)
    static FOrderType MakeFromEditableOrderType(const ABaseCharacter*& _owner, const FEditableOrderType& _OrderType);*/
    
};

