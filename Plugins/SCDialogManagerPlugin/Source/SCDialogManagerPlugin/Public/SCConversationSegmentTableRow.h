#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SCConversationInteractiveChoice.h"
#include "SCConversationSegment.h"
#include "SCConversationSegmentTableRow.generated.h"

class UDialogActionBase;

USTRUCT(BlueprintType)
struct SCDIALOGMANAGERPLUGIN_API FSCConversationSegmentTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsBarkContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCConversationSegment> ConversationSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDialogActionBase*> m_DialogActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpeakerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ListenerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCConversationInteractiveChoice InteractiveChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreCharacterCanSpeak;
    
    FSCConversationSegmentTableRow();
};

