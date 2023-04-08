#pragma once
#include "CoreMinimal.h"
#include "EImposterSpawnTransformType.h"
#include "SCActor.h"
#include "SCCharacterImpostor.generated.h"

class ASCCharacter;
class UAnimInstance;
class USCRagdollConfigDB;
class USCStreamingActorComponent;
class USkeletalMeshComponentBudgeted;

UCLASS(Blueprintable)
class SCCORE_API ASCCharacterImpostor : public ASCActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EImposterSpawnTransformType m_SpawnTransformType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCRagdollConfigDB* m_RagdollConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* m_Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCStreamingActorComponent* m_StreamingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* m_AnimInstance;
    
public:
    ASCCharacterImpostor();
    UFUNCTION(BlueprintCallable)
    void BPF_Show();
    
    UFUNCTION(BlueprintCallable)
    void BPF_Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnHideDueToDisplayLimit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_MimicCharacter(ASCCharacter* _characterToMimic);
    
};

