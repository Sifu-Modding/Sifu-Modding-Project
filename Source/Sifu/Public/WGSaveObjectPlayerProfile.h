#pragma once
#include "CoreMinimal.h"
#include "SCSaveObjectPlayerProfile.h"
#include "ProfileData.h"
#include "GameplayTagContainer.h"
#include "WGSaveObjectPlayerProfile.generated.h"

UCLASS()
class SIFU_API UWGSaveObjectPlayerProfile : public USCSaveObjectPlayerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    FProfileData m_WGProfileData;
    
    UWGSaveObjectPlayerProfile();
    UFUNCTION(BlueprintCallable)
    void BPF_AddUnlockedCheat(FGameplayTag _tagToAdd);
    
};

