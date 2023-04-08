#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FilterPresetCache.h"
#include "FilterPresetDB.generated.h"

class ASCPlayerController;
class UFilterPresetEntitlementDB;

UCLASS(Blueprintable)
class SIFU_API UFilterPresetDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFilterPresetEntitlementDB*> m_DBs;
    
    UFilterPresetDB();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_GetFilters(ASCPlayerController* _controller, UPARAM(Ref) FFilterPresetCache& _outCache) const;
    
};

