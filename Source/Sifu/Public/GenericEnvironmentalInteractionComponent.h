#pragma once
#include "CoreMinimal.h"
#include "SCUserDefinedEnumHandler.h"
#include "BaseEnvironmentalInteractionComponent.h"
#include "EWallSide.h"
#include "Templates/SubclassOf.h"
#include "GenericEnvironmentalInteractionComponent.generated.h"

class USplineComponent;
class UWallEnvironmentalAttackSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UGenericEnvironmentalInteractionComponent : public UBaseEnvironmentalInteractionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreNavMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWallSide m_eWallSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USplineComponent*> m_Splines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWallEnvironmentalAttackSettings> m_Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_EnvType;
    
    UGenericEnvironmentalInteractionComponent();
};

