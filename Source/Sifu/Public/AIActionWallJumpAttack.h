#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AIActionAttack.h"
#include "HitBox.h"
#include "SCRangeFloatCurve.h"
#include "Templates/SubclassOf.h"
#include "AIActionWallJumpAttack.generated.h"

class AActor;
class AFightingCharacter;
class UAIActionWallJumpAttack;
class UAIFightingComponent;
class UEnvQuery;

UCLASS(Blueprintable)
class SIFU_API UAIActionWallJumpAttack : public UAIActionAttack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fQueryResultLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fQueryExecuteFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_ValidAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_DistToWallJumpPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iDeprecationVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCRangeFloatCurve m_angleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCRangeFloatCurve m_DistToWallJumpSnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCRangeFloatCurve m_DistToWallJumpSnapTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxJumpHeightWhenPossible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAddBoxHalfHeightToJumpPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitBox m_WallJumpAttackHitBox;
    
public:
    UAIActionWallJumpAttack();

    UFUNCTION(BlueprintCallable)
    static bool BPF_PrepareWallJumpAttack(UAIFightingComponent* _aiComponent, TSubclassOf<UAIActionWallJumpAttack> _action, AActor* _wallJumpActor, const FVector& _vSnapLocation, const AActor* _target, bool _bIgnoreAngleConstraint);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_PerformWallJumpAttackAction(UAIFightingComponent* _aiComponent, TSubclassOf<UAIActionWallJumpAttack> _action, AActor* _wallJumpActor, const FVector& _vSnapLocation, FGameplayTag _behaviorTag, const AActor* _target, FString& _outError, bool _bIgnoreAngleConstraint);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_ComputeWallJumpStartLocation(FVector& _vOutLocation, const AFightingCharacter* _instigatorChara, const AActor* _target, const AActor* _wallJumpActor, const FVector& _vSnapLocation, TSubclassOf<UAIActionWallJumpAttack> _attackClass);
    
};

