#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "DestructibleStateInfo.h"
#include "FXInfo.h"
#include "HealthComponent.h"
#include "InteractiveDestructionComponent.generated.h"

class UMeshComponent;
class USkeletalMesh;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UInteractiveDestructionComponent : public UHealthComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateChanged, int32, _iNewState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iHitByCharaDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iHitByObjectDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDestructibleStateInfo> m_DestructibleStateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> m_aOwnerMeshToSwap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* m_DestroyedStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_DestroyedSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFXInfo m_ImpactParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFXInfo m_BreakParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> m_SimChunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vRandomSpreadAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseCustomCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName m_DeactivatedChunkCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fChunkDeactivationDelay;
    
public:
    UInteractiveDestructionComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetStateIndex() const;
    
};

