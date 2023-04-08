#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SCCollisionSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class SCCORE_API USCCollisionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer m_CharacterNoCollisionContainer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_CharacterNoCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_CharacterPhysicsProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_CharacterRagdollProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_CharacterHitCapsuleProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_TriggerDefaultProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_TriggerPawnProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_TriggerLocalPawnProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_LDOnlyPawnProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_LDOnlyModelProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_ReplayPawnCapsuleProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_ReplayPawnMeshProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_ReplayPropsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_ReplayPropsProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_NoCollisionTraceMeshProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EnvCollisionRetrieveSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EnvCollisionRetrieveSweepDist;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_eAIColChannel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_eCapsuleLocalPawnChannel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_eHitTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> m_eLDCollChannel;
    
public:
    USCCollisionSettings();
};

