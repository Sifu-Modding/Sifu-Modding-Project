#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SCUserDefinedEnumHandler.h"
#include "WidgetPoolElementArray.h"
#include "WidgetPoolEntryTemplate.h"
#include "WidgetPoolComponent.generated.h"

class USCUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UWidgetPoolComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWidgetPoolEntryTemplate> m_WidgetPoolTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FWidgetPoolElementArray> m_WidgetPool;
    
public:
    UWidgetPoolComponent();
    UFUNCTION(BlueprintCallable)
    void BPF_ReleaseWidget(const FSCUserDefinedEnumHandler& _userEnum, USCUserWidget* _userWidget);
    
    UFUNCTION(BlueprintCallable)
    USCUserWidget* BPF_GetWidget(const FSCUserDefinedEnumHandler& _userEnum);
    
};

