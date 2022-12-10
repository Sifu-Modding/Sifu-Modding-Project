#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SaveManagerDelegateHandler.generated.h"

UCLASS()
class SCCORE_API USaveManagerDelegateHandler : public UObject {
    GENERATED_BODY()
public:
  /*  UPROPERTY(BlueprintAssignable)
    FSaveChangeStatus m_OnSaveStatusChanged;*/
    
   /* UPROPERTY(BlueprintAssignable)
    FFileLoaded m_OnSaveLoaded;
    
    UPROPERTY(BlueprintAssignable)
    FFileLoaded m_OnSaveCreated;
    
    UPROPERTY(BlueprintAssignable)
    FFileLoaded m_OnProfileLoaded;*/
    
    USaveManagerDelegateHandler();
};

