#pragma once
#include "CoreMinimal.h"
#include "AnimContainer.h"
#include "SCUserDefinedEnumHandler.h"
#include "NetOrderStructPlayAnimVariableWeight.h"
#include "NetStructOpeningDoor.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FNetStructOpeningDoor : public FNetOrderStructPlayAnimVariableWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_OpeningDoorAnimAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_ClosingDoorAnimAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInteraction1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_AnimContainerToPlayWhenCarryingWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_VariableWeightLayerWhenCarryingWeapon;
    
    SIFU_API FNetStructOpeningDoor();
};

