#pragma once
#include "CoreMinimal.h"
#include "EOrderType.h"
#include "FightingOrderComponent.h"
#include "Templates/SubclassOf.h"
#include "SwitchableOrderComponent.generated.h"

class UOrderDB;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USwitchableOrderComponent : public UFightingOrderComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EOrderType, TSubclassOf<UOrderDB>> m_ExtraOrderInfos;
    
public:
    USwitchableOrderComponent(const FObjectInitializer& ObjectInitializer);

};

