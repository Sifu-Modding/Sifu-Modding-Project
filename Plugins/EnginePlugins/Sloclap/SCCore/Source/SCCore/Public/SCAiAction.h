#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EAIActionScheduleCondition.h"
#include "SCAIActionMemoryEntryHandler.h"
#include "SCTypedValue.h"
#include "SCAiAction.generated.h"

class ASCCharacter;
class UBehaviorTree;
class UBlackboardComponent;
class USCAIComponent;

UCLASS(Abstract, Blueprintable)
class SCCORE_API USCAiAction : public UObject, public ISCAIActionMemoryEntryHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* m_BehaviorTreeAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIActionScheduleCondition m_eScheduleCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCanForceCancel;
    
public:
    USCAiAction();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_SetBlackBoardValueAsVector(FName _key, const FVector& _vValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_SetBlackBoardValueAsObject(FName _key, UObject* _value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_SetBlackBoardValueAsInt(FName _key, int32 _iValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_SetBlackBoardValueAsFloat(FName _key, float _fValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BPF_SetBlackBoardValueAsBool(FName _key, bool _bValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USCAIComponent* BPF_GetOwnerAiComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASCCharacter* BPF_GetOwner() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BPF_GetEnvQueryParameterValue(FName _paramName, const ASCCharacter* _owner, FSCTypedValue& _outValue) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BPF_GetBlackBoardValueAsVector(FName _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* BPF_GetBlackBoardValueAsObject(FName _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BPF_GetBlackBoardValueAsInt(FName _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetBlackBoardValueAsFloat(FName _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetBlackBoardValueAsBool(FName _key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBlackboardComponent* BPF_GetBlackBoardComponent() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_Finish(bool _bSucceeded, const FString& _message);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_CancelPendingActions(USCAIComponent* _aiComponent, const FString& _reasonForDebug);
    
    UFUNCTION(BlueprintCallable)
    void BPF_Cancel(const FString& _message);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnOrderStarted(FName _orderParamsName, uint8 _uiOrderId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnOrderFinished(FName _orderParamsName, uint8 _uiOrderId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_OnNamedEvent(FName _eventName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnFinished(bool _bSucceeded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnBehaviorTreeInjected(UBlackboardComponent* _blackBoardComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString BPE_GetName() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_GetEnvQueryParameterValue(FName _paramName, const ASCCharacter* _owner, FSCTypedValue& _outValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BPE_Execute(UBlackboardComponent* _blackBoardComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BPE_CanPerform(const USCAIComponent* _aiComponent) const;
    

    // Fix for true pure virtual functions not being implemented
};

