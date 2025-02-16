#pragma once
#include "CoreMinimal.h"
#include "SCActor.h"
#include "SCSequenceAnchor.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SCCORE_API ASCSequenceAnchor : public ASCActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_ComponentSkeletalMesh;
    
public:
    ASCSequenceAnchor(const FObjectInitializer& ObjectInitializer);

};

