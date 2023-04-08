#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SaveManagerDelegateHandler.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USaveManagerDelegateHandler : public UObject {
    GENERATED_BODY()
public:
    /*UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveChangeStatus m_OnSaveStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFileLoaded m_OnSaveLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFileLoaded m_OnSaveCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFileLoaded m_OnProfileLoaded;*/
    
    USaveManagerDelegateHandler();
};

