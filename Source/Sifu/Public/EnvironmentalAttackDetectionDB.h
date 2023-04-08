#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentalAttackDetectionDB.generated.h"

class UTakedownAnimRequest;

UCLASS(Blueprintable)
class SIFU_API UEnvironmentalAttackDetectionDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTakedownAnimRequest> m_DefaultAnimRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTakedownAnimRequest> m_WallAnimRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_eCollisionChannel;
    
    UEnvironmentalAttackDetectionDB();
};

