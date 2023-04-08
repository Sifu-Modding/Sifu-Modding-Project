#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCDelegate.h"
#include "SCSaveGameComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCSaveGameComponent : public UActorComponent {
    GENERATED_BODY()
public:
   /* UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdatedFromSave OnUpdatedFromSave;*/
    
   /* UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast OnPreSaveLevel;*/
    
    USCSaveGameComponent();
};

