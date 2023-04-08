#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCSkeletalMeshVLogDebugDrawComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCSkeletalMeshVLogDebugDrawComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> m_SetAllowDebugBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRecordVLog;
    
public:
    USCSkeletalMeshVLogDebugDrawComponent();
};

