#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AnimSequenceDBCache.h"
#include "AnimSequenceDB.generated.h"

class ASCPlayerController;
class UAnimSequenceEntitlementDB;

UCLASS(Blueprintable)
class SIFU_API UAnimSequenceDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceEntitlementDB*> m_DBs;
    
    UAnimSequenceDB();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_GetSequences(ASCPlayerController* _controller, UPARAM(Ref) FAnimSequenceDBCache& _outCache) const;
    
};

