// #pragma once
// #include "CoreMinimal.h"
// //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ReplayReplicationComponentBase -FallbackName=ReplayReplicationComponentBase
// #include "SCImpostorReplicationInfos.h"
// #include "ImpostorReplication.generated.h"

// UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
// class SCCORE_API UImpostorReplication : public UReplayReplicationComponentBase {
//     GENERATED_BODY()
// public:
// protected:
//     UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Impostors, meta=(AllowPrivateAccess=true))
//     TArray<FSCImpostorReplicationInfos> m_Impostors;
    
// public:
//     UImpostorReplication(const FObjectInitializer& ObjectInitializer);

//     virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

// protected:
//     UFUNCTION(BlueprintCallable)
//     void OnRep_Impostors();
    
// };

