//#pragma once
//#include "CoreMinimal.h"
//#include "AITypes.h"
//#include "Tasks/AITask.h"
//#include "AITypes.h"
//#include "UObject/NoExportTypes.h"
//#include "GameplayTask.h"
//#include "SVONMoveTaskCompletedSignatureDelegate.h"
//#include "AITask_SVONMoveTo.generated.h"
//
//class AAIController;
//class AActor;
////class UAITask_SVONMoveTo;
//
//UCLASS(Blueprintable)
//class UESVON_API UAITask_SVONMoveTo : public UAITask {
//    GENERATED_BODY()
//public:
//protected:
//    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    UGameplayTask::FGenericGameplayTaskDelegate OnRequestFailed;
//    
//    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    FSVONMoveTaskCompletedSignature OnMoveFinished;
//    
//    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
//    FAIMoveRequest MoveRequest;
//    
//public:
//    UAITask_SVONMoveTo();
//   /* UFUNCTION(BlueprintCallable)
//    static UAITask_SVONMoveTo* SVONAIMoveTo(AAIController* Controller, FVector GoalLocation, bool aUseAsyncPathfinding, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, bool bLockAILogic, bool bUseContinuosGoalTracking);
//    */
//};
//
