#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "SCDelegate.h"
#include "SCNavLinkProxy.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API ASCNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
protected:
    /*UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FMulticastDelegateActorDyn* m_onActorLeftSmartLink;*/
    
public:
    ASCNavLinkProxy();
    UFUNCTION(BlueprintCallable)
    void SetNavLinksEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSmartLinkLeft(AActor* Agent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllNavLinksEnabled() const;
    
};

