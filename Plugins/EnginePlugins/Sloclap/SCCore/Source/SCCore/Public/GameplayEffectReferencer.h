#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayEffectReferencer.generated.h"

class USCGameplayEffect;

UCLASS(Blueprintable)
class SCCORE_API UGameplayEffectReferencer : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USCGameplayEffect*> m_ListOfAllGameplayEffect;
    
public:
    UGameplayEffectReferencer();
    UFUNCTION(BlueprintCallable)
    void RetrieveAllGameplayEffects();
    
};

