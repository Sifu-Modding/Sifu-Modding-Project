#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CameraDataModifierWithBehavior.h"
#include "CameraTransitionInfoPairStruct.h"
#include "AbstractCameraData.generated.h"

class UCameraTransitionInfo;

UCLASS(Abstract, Blueprintable)
class SIFU_API UAbstractCameraData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraTransitionInfo* m_DefaultCameraTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraTransitionInfoPairStruct> m_CameraTransitionDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraTransitionInfo* m_OutCameraTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraDataModifierWithBehavior> m_Modifiers;
    
public:
    UAbstractCameraData();

protected:
    UFUNCTION(BlueprintCallable)
    void ClearTransitions();
    
};

