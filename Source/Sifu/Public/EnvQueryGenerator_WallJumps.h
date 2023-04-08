#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_WallJumps.generated.h"

class AActor;
class UActorComponent;
class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class UEnvQueryGenerator_WallJumps : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> m_RequiredComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_SearchedActorClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue m_GenerateOnlyActorsInRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_SearchCenter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_SearchRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_MinAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_MaxAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_MinAngleForwardToWall;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_MaxAngleForwardToWall;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_MinSelfToWallJumpDist;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_MaxSelfToWallJumpDist;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_MinTargetToWallJumpDist;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_MaxTargetToWallJumpDist;
    
    UEnvQueryGenerator_WallJumps();
};

