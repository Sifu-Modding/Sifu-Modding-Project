#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnvironmentalInteractionZone.generated.h"

UCLASS(Blueprintable)
class SIFU_API AEnvironmentalInteractionZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFallEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnvironmentalTakedownEnabled;
    
    AEnvironmentalInteractionZone(const FObjectInitializer& ObjectInitializer);

};

