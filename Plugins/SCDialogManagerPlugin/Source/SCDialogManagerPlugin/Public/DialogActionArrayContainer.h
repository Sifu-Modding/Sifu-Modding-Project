#pragma once
#include "CoreMinimal.h"
#include "DialogActionArrayContainer.generated.h"

class UDialogActionBase;

USTRUCT(BlueprintType)
struct FDialogActionArrayContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDialogActionBase*> m_Array;
    
    SCDIALOGMANAGERPLUGIN_API FDialogActionArrayContainer();
};

