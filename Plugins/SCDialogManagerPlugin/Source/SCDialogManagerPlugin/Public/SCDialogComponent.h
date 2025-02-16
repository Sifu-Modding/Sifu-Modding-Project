#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "SCDelegate.h"
#include "SCPoolableActorComponent.h"
#include "SCDialogComponent.generated.h"

class UBlackboardData;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCDIALOGMANAGERPLUGIN_API USCDialogComponent : public UBlackboardComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericDialogEventDelegate OnGenericDialogEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_ContextualDb;
    
public:
    USCDialogComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_InitBlackBoardFromAsset(UBlackboardData* _data);
    

    // Fix for true pure virtual functions not being implemented
};

