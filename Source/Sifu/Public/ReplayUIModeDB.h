#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "ReplayUIModeDB.generated.h"

class UReplayUIModeUserWidget;

UCLASS(Blueprintable)
class SIFU_API UReplayUIModeDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UReplayUIModeUserWidget>> m_UIModeUserWidgets;
    
    UReplayUIModeDB();

};

