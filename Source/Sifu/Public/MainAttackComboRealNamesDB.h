#pragma once
#include "CoreMinimal.h"
#include "MainAttackComboRealNamesDB.generated.h"

USTRUCT(BlueprintType)
struct FMainAttackComboRealNamesDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_ComboQuadrantsFrontLeftXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_ComboQuadrantsFrontRightXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_ComboQuadrantsBackRightXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> m_ComboQuadrantsBackLeftXls;
    
    SIFU_API FMainAttackComboRealNamesDB();
};

