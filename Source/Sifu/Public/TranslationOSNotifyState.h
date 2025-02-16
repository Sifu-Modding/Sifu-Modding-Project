#pragma once
#include "CoreMinimal.h"
#include "OrderServiceNotifyState.h"
#include "TranslationOSNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UTranslationOSNotifyState : public UOrderServiceNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseAnimRootMotion;
    
public:
    UTranslationOSNotifyState();

};

