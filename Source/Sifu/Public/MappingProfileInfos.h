#pragma once
#include "CoreMinimal.h"
#include "EKeyboardLayout.h"
#include "MappingProfileInfos.generated.h"

class UInputMappingProfileDB;

USTRUCT(BlueprintType)
struct FMappingProfileInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyboardLayout m_eKeyboardLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInputMappingProfileDB> m_Profile;
    
    SIFU_API FMappingProfileInfos();
};

