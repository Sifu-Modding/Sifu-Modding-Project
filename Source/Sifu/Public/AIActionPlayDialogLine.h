#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WGAiAction.h"
#include "AIActionPlayDialogLine.generated.h"

class AActor;
class UAnimSequence;

UCLASS(Blueprintable)
class SIFU_API UAIActionPlayDialogLine : public UWGAiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_Dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_DialogText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_SecondaryActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_animation;
    
public:
    UAIActionPlayDialogLine();
};

