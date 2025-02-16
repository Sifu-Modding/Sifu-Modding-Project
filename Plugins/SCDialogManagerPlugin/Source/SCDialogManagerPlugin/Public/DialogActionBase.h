#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogActionBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SCDIALOGMANAGERPLUGIN_API UDialogActionBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_OnNodeStart;
    
    UDialogActionBase();

};

