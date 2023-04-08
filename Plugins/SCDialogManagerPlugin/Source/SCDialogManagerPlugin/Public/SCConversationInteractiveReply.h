#pragma once
#include "CoreMinimal.h"
#include "SCConversationRule.h"
#include "SCConversationInteractiveReply.generated.h"

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCConversationInteractiveReply {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText TextWithGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCConversationRule> Rules;
    
    FSCConversationInteractiveReply();
};

