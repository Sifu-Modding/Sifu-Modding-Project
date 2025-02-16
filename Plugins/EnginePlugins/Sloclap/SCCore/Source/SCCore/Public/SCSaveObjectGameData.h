#pragma once
#include "CoreMinimal.h"
#include "SCGameData.h"
#include "SCSaveObject.h"
#include "SCSaveObjectGameData.generated.h"

UCLASS(Blueprintable)
class SCCORE_API USCSaveObjectGameData : public USCSaveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSCGameData m_SCSavedData;
    
    USCSaveObjectGameData();

};

