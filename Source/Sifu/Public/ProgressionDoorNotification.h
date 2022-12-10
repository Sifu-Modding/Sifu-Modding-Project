#pragma once
#include "CoreMinimal.h"
#include "BaseNotification.h"
#include "ProgressionDoorStruct.h"
#include "ProgressionDoorNotification.generated.h"

class UQuestItemData;
class UProgressionDoorNotification;

UCLASS()
class UProgressionDoorNotification : public UBaseNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UQuestItemData* m_LastFulfilledQuest;
    
    UPROPERTY(BlueprintReadOnly)
    FProgressionDoorStruct m_ProgressionDoorStruct;
    
    UProgressionDoorNotification();
    UFUNCTION(BlueprintCallable)
    UProgressionDoorNotification* BPF_Init(const FProgressionDoorStruct& _progressionDoorStruct, UQuestItemData* _lastFulfilledQuest);
    
};

