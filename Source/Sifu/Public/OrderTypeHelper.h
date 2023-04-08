#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EOrderType.h"
#include "EditableOrderType.h"
#include "OrderType.h"
#include "OrderTypeHelper.generated.h"

class ABaseCharacter;

UCLASS(Blueprintable)
class SIFU_API UOrderTypeHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOrderTypeHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FOrderType MakeOrderTypeFromEnum(EOrderType _eOrderType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FOrderType MakeOrderTypeFromBP(const ABaseCharacter* _owner, FName _OrderType);
    
  /*  UFUNCTION(BlueprintCallable, BlueprintPure)
    static FOrderType MakeFromEditableOrderType(const ABaseCharacter*& _owner, const FEditableOrderType& _OrderType);*/
    
};

