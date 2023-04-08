#pragma once
#include "CoreMinimal.h"
#include "SCConversationInteractiveReply.h"
#include "SCConversationInteractiveChoice.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCConversationInteractiveChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCConversationInteractiveReply> Replies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TimerExpiredNextSegment;
    
    FSCConversationInteractiveChoice();
};

