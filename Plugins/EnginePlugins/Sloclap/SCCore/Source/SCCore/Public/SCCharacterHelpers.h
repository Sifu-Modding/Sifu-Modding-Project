#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SCCharacterHelpers.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class SCCORE_API USCCharacterHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCCharacterHelpers();

    UFUNCTION(BlueprintCallable)
    static bool BPF_TryGetRootBoneTransform(const ACharacter* _character, FTransform& _outBoneTransform, bool _bComponentSpace);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_TryGetPelvisBoneTransform(const ACharacter* _character, FTransform& _outPevlisTransform);
    
    UFUNCTION(BlueprintCallable)
    static FVector BPF_GetFloorNormal(const ACharacter* _character);
    
};

