#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Volume.h"
#include "ESVOGenerationStrategy.h"
#include "SVONVolume.generated.h"

class USVONVolumeRenderingComponent;

UCLASS(Blueprintable)
class UESVON_API ASVONVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool myShowMortonCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool myShowNeighbourLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool myShowParentChildLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 myVoxelPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> myCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EObjectTypeQuery> myObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float myClearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESVOGenerationStrategy myGenerationStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 myNumLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 myNumBytes;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USVONVolumeRenderingComponent* RenderingComp;
    
    ASVONVolume();
};

