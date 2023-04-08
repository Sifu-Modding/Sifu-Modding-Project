#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SCCollisionProfileDescription.h"
#include "SCCollisionResponseBuilder.h"
#include "SCCollisionResponsePreset.h"
#include "SCCollisionResponseTemplate.h"
#include "SCCollisionLibrary.generated.h"

class UPrimitiveComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class SCCORE_API USCCollisionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCCollisionLibrary();
    UFUNCTION(BlueprintCallable)
    static void BPF_VisualLogCollision(UPrimitiveComponent* _primitiveComponent, const FName& _categoryName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ECollisionChannel> BPF_TraceTypeQueryToCollisionChannel(TEnumAsByte<ETraceTypeQuery> _eTraceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCollisionResponseContainer BPF_ToContainerForTraceMulti(const FCollisionResponseContainer& _responses);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetCollisionResponseToChannels(UPrimitiveComponent* _primitiveComponent, const FCollisionResponseContainer& _newReponses);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetCollisionResponseFromTemplate(UPrimitiveComponent* _primitiveComponent, const FSCCollisionResponseTemplate& _template);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetCollisionResponseFromPreset(UPrimitiveComponent* _primitiveComponent, const FSCCollisionResponsePreset& _preset);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_PrepareContainerForTraceMulti(UPARAM(Ref) FCollisionResponseContainer& _responses);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ECollisionChannel> BPF_ObjectTypeQueryToCollisionChannel(TEnumAsByte<EObjectTypeQuery> _eObjectType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ECollisionResponse> BPF_GetCollisionResponse(const FCollisionResponseContainer& _responseContainer, TEnumAsByte<ECollisionChannel> _eCollisionChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_GetCollisionProfile(FName _collisionProfileName, FSCCollisionResponseTemplate& _outTemplatee);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSCCollisionProfileDescription> BPF_GetAllCollisionProfileDescriptions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCollisionResponseContainer BPF_GenerateCollisionResponseContainer(const FSCCollisionResponseBuilder& _builder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCollisionResponseContainer BPF_DefaultResponseContainer_OneException(TEnumAsByte<ECollisionResponse> _eDefaultResponse, TEnumAsByte<ECollisionChannel> _eExceptionChannel, TEnumAsByte<ECollisionResponse> _eExceptionResponse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCollisionResponseContainer BPF_DefaultResponseContainer(TEnumAsByte<ECollisionResponse> _eDefaultResponse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_CalculateStaticMeshMass(UStaticMesh* _staticMesh);
    
};

