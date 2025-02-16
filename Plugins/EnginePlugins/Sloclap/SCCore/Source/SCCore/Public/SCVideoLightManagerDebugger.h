#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCVideoLightManagerDebugger.generated.h"

class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USCVideoLightManagerDebugger : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* m_currentRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_SamplerMaterialInstanceDynamic;
    
    USCVideoLightManagerDebugger(const FObjectInitializer& ObjectInitializer);

};

