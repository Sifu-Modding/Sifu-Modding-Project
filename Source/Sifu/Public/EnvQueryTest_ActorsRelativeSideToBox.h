#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EGetActorsRelativeSideToBox.h"
#include "ETestAxis2D.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_ActorsRelativeSideToBox.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class SIFU_API UEnvQueryTest_ActorsRelativeSideToBox : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGetActorsRelativeSideToBox m_eTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxDistanceToBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_ActorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_ActorB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETestAxis2D m_eTestAxis;
    
public:
    UEnvQueryTest_ActorsRelativeSideToBox();
};

