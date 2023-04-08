#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCEventNameToSoundFileTableRow.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCEventNameToSoundFileTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundNameChinese;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SoundNameCantonese;
    
    FSCEventNameToSoundFileTableRow();
};

