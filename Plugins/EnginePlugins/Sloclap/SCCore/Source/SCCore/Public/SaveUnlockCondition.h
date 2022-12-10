#pragma once
#include "CoreMinimal.h"
#include "AchievementUnlockCondition.h"
#include "SaveUnlockCondition.generated.h"

class USCSaveObject;

UCLASS()
class SCCORE_API USaveUnlockCondition : public UAchievementUnlockCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<USCSaveObject> m_saveToCheck;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsLastSaveCheck;
    
public:
    USaveUnlockCondition();
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_CheckingSave(const USCSaveObject* _saveToCheck);
    
};

