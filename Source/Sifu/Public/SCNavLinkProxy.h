#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "SCDelegate.h"
#include "ESpeedState.h"
#include "SCNavLinkProxy.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API ASCNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMulticastDelegateActorDyn m_onActorLeftSmartLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eMinimalSpeedState;
    
public:
    ASCNavLinkProxy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNavLinksEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSmartLinkLeft(AActor* Agent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllNavLinksEnabled() const;
    
};

