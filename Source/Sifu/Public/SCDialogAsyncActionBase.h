#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DialogAsyncOutputPinDelegate.h"
#include "SCDialogAsyncActionBase.generated.h"

class ACharacter;
class USCDialogAsyncActionBase;

UCLASS(Blueprintable)
class SIFU_API USCDialogAsyncActionBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogAsyncOutputPin OnDialogCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogAsyncOutputPin OnDialogCut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogAsyncOutputPin OnLineEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogAsyncOutputPin OnInteractiveChoiceSelected;
    
    USCDialogAsyncActionBase();

    UFUNCTION(BlueprintCallable)
    static USCDialogAsyncActionBase* BPF_StartConversationExtended(ACharacter* _character, FName _startingSegment, const bool _bGenericSubtitles, ACharacter* _secondary, bool _bCutOtherDialogs, bool _bLookAtEnabled);
    
};

