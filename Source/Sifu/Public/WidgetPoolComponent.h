#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WidgetPoolEntryTemplate.h"
#include "SCUserDefinedEnumHandler.h"
#include "WidgetPoolElementArray.h"
#include "WidgetPoolComponent.generated.h"

class USCUserWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UWidgetPoolComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FWidgetPoolEntryTemplate> m_WidgetPoolTemplate;
    
    UPROPERTY(Transient)
    TMap<FName, FWidgetPoolElementArray> m_WidgetPool;
    
public:
    UWidgetPoolComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_ReleaseWidget(const FSCUserDefinedEnumHandler& _userEnum, USCUserWidget* _userWidget);
    
    UFUNCTION(BlueprintCallable)
    USCUserWidget* BPF_GetWidget(const FSCUserDefinedEnumHandler& _userEnum);
    
};

