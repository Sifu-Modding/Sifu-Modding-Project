#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPostProcessAnimDebugRole.h"
#include "PostProcessAnimInstance.h"
#include "EditorPreviewPostProcessAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class SIFU_API UEditorPreviewPostProcessAnimInstance : public UPostProcessAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DebugIKDummySubInstanceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DebugIKMasterSubInstanceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPostProcessAnimDebugRole m_eDebugRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDebugFloorHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vLocationDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vExpectedLocation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimSequence> m_DummyAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDummyAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDummyAnimMirror;
    
    UEditorPreviewPostProcessAnimInstance();
};

