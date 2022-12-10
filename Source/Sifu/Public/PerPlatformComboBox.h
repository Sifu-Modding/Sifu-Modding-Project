#pragma once
#include "CoreMinimal.h"
#include "PerPlatformWidget.h"
#include "Components/ComboBoxString.h"
#include "PerPlatformComboBox.generated.h"

UCLASS()
class UPerPlatformComboBox : public UComboBoxString, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NormalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SmallScreenSize;
    
protected:
   /* UPROPERTY(BlueprintAssignable)
    FOnCultureChanged OnCultureChanged;*/
    
public:
    UPerPlatformComboBox();
    
    // Fix for true pure virtual functions not being implemented
};

