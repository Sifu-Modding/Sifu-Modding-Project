#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MirrorAnimStruct.h"
#include "MirrorAnimDB.generated.h"

class USkeleton;

UCLASS(Blueprintable)
class SCCORE_API UMirrorAnimDB : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMirrorAnimStruct> m_MirrorAnimStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMirrorAnimStruct> m_MirrorAnimStructMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* m_UberSkeleton;
    
    UMirrorAnimDB();

    UFUNCTION(BlueprintCallable)
    FName BPF_GetTwinsBoneName(const FName& _boneName);
    
};

