#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CustomWidgetNavigationData.h"
#include "CustomWidgetNavigation.generated.h"

UCLASS(Blueprintable)
class SIFU_API UCustomWidgetNavigation : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomWidgetNavigationData m_CustomNavigationConfig;
    
public:
    UCustomWidgetNavigation();

    UFUNCTION(BlueprintCallable)
    void BPF_RestoreNavigationConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsAnalogNavigationEnabled();
    
    UFUNCTION(BlueprintCallable)
    void BPF_ApplyNavigationConfig();
    
};

