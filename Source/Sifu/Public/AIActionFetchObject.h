#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "AIActionFetchObject.generated.h"

class AActor;
class UOrderComponent;

UCLASS(Blueprintable)
class SIFU_API UAIActionFetchObject : public UWGAiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bFetchClosestWeaponIfNotSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUsePerceptionToFindWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_ObjectToFetch;
    
public:
    UAIActionFetchObject();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPickupStarting(uint8 _uiOrderId, UOrderComponent* _OrderComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_SetObjectToFetch(AActor* _objectToFetch);
    
};

