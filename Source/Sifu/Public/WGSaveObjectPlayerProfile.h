#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SCSaveObjectPlayerProfile.h"
#include "ProfileData.h"
#include "WGSaveObjectPlayerProfile.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWGSaveObjectPlayerProfile : public USCSaveObjectPlayerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FProfileData m_WGProfileData;
    
    UWGSaveObjectPlayerProfile();
    UFUNCTION(BlueprintCallable)
    void BPF_AddUnlockedCheat(FGameplayTag _tagToAdd);
    
};

