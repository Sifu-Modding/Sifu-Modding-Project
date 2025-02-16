#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ECharacterGender.h"
#include "SCCharacter.h"
#include "DynamicMaterialInput.h"
#include "DynamicMaterialsPerType.h"
#include "EControllerNature.h"
#include "EFXMaterials.h"
#include "ERelationshipTypes.h"
#include "InputAction.h"
#include "InputContext.h"
#include "BaseCharacter.generated.h"

class AActor;
class APlayerController;
class APlayerState;
class UCharacterTextLipSync;
class UMaterialInstanceDynamic;
class UOrderComponent;
class UPrimitiveComponent;
class USCDialogComponent;
class USkinTonesDB;
class USocialComponent;

UCLASS(Blueprintable)
class SIFU_API ABaseCharacter : public ASCCharacter, public IAISightTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USocialComponent* m_SocialComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOrderComponent* m_OrderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterTextLipSync* m_LipSyncComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iBuildUpMaxShrinkingFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkinTonesDB* m_SkinTones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDynamicMaterialsPerType> m_DynamicMaterialsPerFxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USCDialogComponent* m_DialogComponent;
    
public:
    ABaseCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnLandedRaw(const FHitResult& _Impact);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCapsuleBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _otherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateDynamicMaterials(TArray<FDynamicMaterialInput> _ParametersInputs);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetVectorValueOnMaterials(FName _parameterName, FLinearColor _value);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetScalarValueOnMaterials(FName _parameterName, float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGenderInSave(ECharacterGender _eNewGender, bool _bSendTrackingData);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SetGenderInProfile(ECharacterGender _eNewGender);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_PopAvailabilityLayer(int32 _iId, InputContext _eInputContext);
    
    UFUNCTION(BlueprintCallable)
    bool BPF_IsCurrentGameModeCoopAlly(AActor* _otherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsAvailable(InputAction _eAction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USocialComponent* BPF_GetSocialComponent() const;
    
    UFUNCTION(BlueprintCallable)
    ERelationshipTypes BPF_GetRelationship(AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOrderComponent* BPF_GetOrderComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterGender BPF_GetGenderInSave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMaterialInstanceDynamic*> BPF_GetCurrentMaterialInstances();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControllerNature BPF_GetControllerNature() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_CreateDynamicMaterials(EFXMaterials _eFxType, bool _bFromItemLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PlayerStateInitialized(APlayerState* _playerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_ControllerReplicated(APlayerController* _controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BodyPartsUpdated();
    

    // Fix for true pure virtual functions not being implemented
};

