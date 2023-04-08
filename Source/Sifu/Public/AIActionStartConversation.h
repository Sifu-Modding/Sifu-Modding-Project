#pragma once
#include "CoreMinimal.h"
#include "WGAiAction.h"
#include "AIActionStartConversation.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class SIFU_API UAIActionStartConversation : public UWGAiAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_StartingSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCutOtherDialogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bGenericSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* m_SecondaryActor;
    
public:
    UAIActionStartConversation();
};

