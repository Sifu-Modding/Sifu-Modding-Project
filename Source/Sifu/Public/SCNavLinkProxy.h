#pragma once
#include "CoreMinimal.h"
#include "CustomNavLinkReachedDelegate.h"
#include "GameFramework/Actor.h"
#include "SCNavLinkProxy.generated.h"

class USCCustomNavLink;
class USceneComponent;

UCLASS()
class SIFU_API ASCNavLinkProxy : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FCustomNavLinkReached OnNavLinkReached;
    
private:
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<USCCustomNavLink*> m_CustomNavLinks;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    USceneComponent* m_PositionComponent;
    
    UPROPERTY(EditAnywhere)
    float m_fDistance;
    
    UPROPERTY(EditAnywhere)
    float m_fLeftOffset;
    
    UPROPERTY(EditAnywhere)
    float m_fRightOffset;
    
public:
    ASCNavLinkProxy();
protected:
    UFUNCTION(BlueprintCallable)
    void SetNavLinksEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintPure)
    bool AreAllNavLinksEnabled() const;
    
};

