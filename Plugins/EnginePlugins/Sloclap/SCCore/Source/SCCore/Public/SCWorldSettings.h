#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "SCWorldSettings.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseLegacyCollisionSystem;
    
public:
    ASCWorldSettings(const FObjectInitializer& ObjectInitializer);

};

