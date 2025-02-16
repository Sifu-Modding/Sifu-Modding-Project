#pragma once
#include "CoreMinimal.h"
#include "SCUserWidget.h"
#include "MenuSlot.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UMenuSlot : public USCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowSoundPlaying;
    
    UMenuSlot();

};

