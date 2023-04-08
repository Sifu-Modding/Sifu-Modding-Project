#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "SequenceRoleTypeDescription.generated.h"

class UAssociatedActorGetter;
class UNameHandler;

USTRUCT(BlueprintType)
struct SCCORE_API FSequenceRoleTypeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNameHandler> m_NameHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UAssociatedActorGetter>> m_RoleGettersMap;
    
    FSequenceRoleTypeDescription();
};

