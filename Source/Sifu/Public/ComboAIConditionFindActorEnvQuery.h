#pragma once
#include "CoreMinimal.h"
#include "ComboAIConditionFindActorsEnvQuery.h"
#include "ComboAIConditionFindActorEnvQuery.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboAIConditionFindActorEnvQuery : public UComboAIConditionFindActorsEnvQuery {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_StoreResultInBlackBoardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_StoreResultInBlackBoardKeyVector;
    
public:
    UComboAIConditionFindActorEnvQuery();
};

