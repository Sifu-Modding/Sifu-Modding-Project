#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCDialogData.h"
#include "SCDialogLineTableRow.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCDialogLineTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCDialogData> DialogsVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinePriority;
    
    FSCDialogLineTableRow();
};

