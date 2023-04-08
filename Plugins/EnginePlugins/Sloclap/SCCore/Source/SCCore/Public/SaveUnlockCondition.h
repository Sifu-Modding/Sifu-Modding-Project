#pragma once
#include "CoreMinimal.h"
#include "AchievementUnlockCondition.h"
#include "SaveUnlockCondition.generated.h"

class USCSaveObject;

UCLASS(Blueprintable)
class SCCORE_API USaveUnlockCondition : public UAchievementUnlockCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USCSaveObject> m_saveToCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsLastSaveCheck;
    
public:
    USaveUnlockCondition();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_CheckingSave(const USCSaveObject* _saveToCheck);
    
};

