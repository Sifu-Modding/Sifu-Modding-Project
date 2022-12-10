#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ReplayReplicationComponentBase -FallbackName=ReplayReplicationComponentBase
#include "SCImpostorReplicationInfos.h"
#include "ImpostorReplication.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API UImpostorReplication : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(ReplicatedUsing=OnRep_Impostors)
    TArray<FSCImpostorReplicationInfos> m_Impostors;
    
public:
    UImpostorReplication();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_Impostors();
    
};

