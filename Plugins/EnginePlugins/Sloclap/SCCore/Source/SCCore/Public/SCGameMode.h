#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "SCGameMode.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable, NonTransient)
class SCCORE_API ASCGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayEffect*> m_PlayerGameModeGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsUsingPools;
    
    ASCGameMode(const FObjectInitializer& ObjectInitializer);

};

