#pragma once
#include "CoreMinimal.h"
#include "MainAttackComboDB.generated.h"

USTRUCT(BlueprintType)
struct FMainAttackComboDB {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboQuadrantsFrontLeftXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboQuadrantsFrontRightXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboQuadrantsBackRightXls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ComboQuadrantsBackLeftXls;
    
    SIFU_API FMainAttackComboDB();
};

