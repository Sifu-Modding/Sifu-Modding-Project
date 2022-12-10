#pragma once
#include "CoreMinimal.h"
#include "SCDialogRealOverrideDb.h"
#include "EJoinDialogActors.h"
#include "WGDialogRealOverrideDb.generated.h"

UCLASS()
class SIFU_API UWGDialogRealOverrideDb : public USCDialogRealOverrideDb {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EJoinDialogActors m_eJoinDialogActorsOnStart;
    
    UWGDialogRealOverrideDb();
};

