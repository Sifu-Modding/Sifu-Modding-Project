#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
#include "ERelationshipTypes.h"
#include "RelationshipTypeCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API URelationshipTypeCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERelationshipTypes> m_AllowedRelationshipTypes;
    
    URelationshipTypeCondition();
};

