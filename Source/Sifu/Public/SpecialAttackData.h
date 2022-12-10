#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EParrySide.h"
#include "EAvoidType.h"
#include "SpecialAttackData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class SIFU_API USpecialAttackData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTexture2D* m_AvoidPictos[7];
    
    UPROPERTY(EditAnywhere)
    UTexture2D* m_ParryPictos[2];
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* m_GuardBreakPicto;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* m_InterruptPicto;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* m_AbsorbPicto;
    
    USpecialAttackData();
    UFUNCTION(BlueprintPure)
    UTexture2D* GetParryPicto(EParrySide _eParryType);
    
    UFUNCTION(BlueprintPure)
    UTexture2D* GetAvoidPicto(EAvoidType _eAvoidType);
    
};

