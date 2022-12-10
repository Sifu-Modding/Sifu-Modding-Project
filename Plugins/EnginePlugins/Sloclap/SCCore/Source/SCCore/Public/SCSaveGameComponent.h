#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCDelegate.h"
#include "SCSaveGameComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCSaveGameComponent : public UActorComponent {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintAssignable)
    FOnUpdatedFromSave OnUpdatedFromSave;*/
    
   /* UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnPreSaveLevel;*/
    
    USCSaveGameComponent();
};

