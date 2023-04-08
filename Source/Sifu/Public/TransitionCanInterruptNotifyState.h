#pragma once
#include "CoreMinimal.h"
#include "Bool.h"
#include "SCAnimNotifyState.h"
#include "TransitionCanInterruptNotifyState.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UTransitionCanInterruptNotifyState : public USCAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBool m_TransitionAllowance[86];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BaseName;
    
    UTransitionCanInterruptNotifyState();
protected:
    UFUNCTION(BlueprintCallable)
    void InvertUTurn() const;
    
    UFUNCTION(BlueprintCallable)
    void InvertTurnInPlace() const;
    
    UFUNCTION(BlueprintCallable)
    void InvertStrafe() const;
    
    UFUNCTION(BlueprintCallable)
    void InvertStop() const;
    
    UFUNCTION(BlueprintCallable)
    void InvertStart() const;
    
    UFUNCTION(BlueprintCallable)
    void InvertAll() const;
    
    UFUNCTION(BlueprintCallable)
    void AllowNone() const;
    
    UFUNCTION(BlueprintCallable)
    void AllowAll() const;
    
};

