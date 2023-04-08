#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERelationshipTypes.h"
#include "HUDUserWidget.h"
#include "TargetableWidget.generated.h"

class AActor;
class USceneComponent;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTargetableWidget : public UHUDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSetVisibleWhenRelatedActorSet;
    
public:
    UTargetableWidget();
    UFUNCTION(BlueprintCallable)
    void BPF_SetRelatedActor(AActor* _actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RemoveAttachedWidget(UWidget* _widget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* BPF_GetRelatedActor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_AddAttachedWidget(UWidget* _widget, FVector _vOffset3D, FVector2D _vOffset2D, USceneComponent* _sceneComponent, FName _socket);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RelatedActorRelationshipChanged(ERelationshipTypes _eRelation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_RelatedActorChanged(AActor* _actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnAIPhaseChanged(int32 _iPreviousPhase, int32 _iPhase, FName _archetypeName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_FightDetectionWarning();
    
};

