#pragma once
#include "CoreMinimal.h"
#include "BaseHitDetectionDB.h"
#include "LineHitDetectionDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API ULineHitDetectionDB : public UBaseHitDetectionDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHalfHeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iNumLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOneSided;
    
public:
    ULineHitDetectionDB();

};

