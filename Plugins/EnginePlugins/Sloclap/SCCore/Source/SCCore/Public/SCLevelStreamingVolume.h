#pragma once
#include "CoreMinimal.h"
#include "SCPlayerVolumeNoPhysics.h"
#include "SCStreamingVolumeDependencies.h"
#include "SCLevelStreamingVolume.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCLevelStreamingVolume : public ASCPlayerVolumeNoPhysics {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_LevelNames;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCStreamingVolumeDependencies m_VolumeDependencies[3];
    
public:
    ASCLevelStreamingVolume(const FObjectInitializer& ObjectInitializer);

};

