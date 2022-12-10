#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SCDynamicDelegateDelegate.h"
#include "SCMaterialHelpers.generated.h"

class UMeshComponent;
class UMaterialParameterCollection;
class UObject;
class UCurveBase;
class ACharacter;

UCLASS(BlueprintType)
class SCCORE_API USCMaterialHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCMaterialHelpers();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static void BPF_SetMPCVectorParameterValue(const UObject* _worldContext, UMaterialParameterCollection* _collection, FName _parameter, FVector _vValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContext"))
    static void BPF_SetMPCScalarParameterValue(const UObject* _worldContext, UMaterialParameterCollection* _collection, FName _parameter, float _fValue);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_DeleteParameterBinding(int32 _iHandle);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BlendMaterialParameterLinearVectorFinishable(UMeshComponent* _owner, FName _name, const FVector& _fromValue, const FVector& _toValue, float _fDuration, FSCDynamicDelegate _onFinished, int32 _iMaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BlendMaterialParameterLinearVector(UMeshComponent* _owner, FName _name, const FVector& _fromValue, const FVector& _toValue, float _fDuration, int32 _iMaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BlendMaterialParameterLinearFloatFinishable(UMeshComponent* _owner, FName _name, float _fFromValue, float _fToValue, float _fDuration, FSCDynamicDelegate _onFinished, int32 _iMaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BlendMaterialParameterLinearFloat(UMeshComponent* _owner, FName _name, float _fFromValue, float _fToValue, float _fDuration, int32 _iMaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BlendMaterialParameterLinearColorFinishable(UMeshComponent* _owner, FName _name, const FLinearColor& _fromValue, const FLinearColor& _toValue, float _fDuration, FSCDynamicDelegate _onFinished, int32 _iMaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BlendMaterialParameterLinearColor(UMeshComponent* _owner, FName _name, const FLinearColor& _fromValue, const FLinearColor& _toValue, float _fDuration, int32 _iMaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BlendMaterialParameterCurveFinishable(UMeshComponent* _owner, FName _name, const UCurveBase* _curve, FSCDynamicDelegate _onFinished, int32 _iMaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_BlendMaterialParameterCurve(UMeshComponent* _owner, FName _name, const UCurveBase* _curve, int32 _iMaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Blend_MPC_ParameterLinearVectorFinishable(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, const FVector& _fromValue, const FVector& _toValue, float _fDuration, FSCDynamicDelegate _onFinished);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Blend_MPC_ParameterLinearVector(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, const FVector& _fromValue, const FVector& _toValue, float _fDuration);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Blend_MPC_ParameterLinearFloatFinishable(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, float _fFromValue, float _fToValue, float _fDuration, FSCDynamicDelegate _onFinished);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Blend_MPC_ParameterLinearFloat(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, float _fFromValue, float _fToValue, float _fDuration);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Blend_MPC_ParameterLinearColorFinishable(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, const FLinearColor& _fromValue, const FLinearColor& _toValue, float _fDuration, FSCDynamicDelegate _onFinished);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Blend_MPC_ParameterLinearColor(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, const FLinearColor& _fromValue, const FLinearColor& _toValue, float _fDuration);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Blend_MPC_ParameterCurveFinishable(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, const UCurveBase* _curve, FSCDynamicDelegate _onFinished);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_Blend_MPC_ParameterCurve(UObject* _owner, UMaterialParameterCollection* _collection, FName _name, const UCurveBase* _curve);
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_BindMPCParamToCharacterSocketLocation(ACharacter* _character, FName _socketName, UMaterialParameterCollection* _collection, FName _parameterName);
    
};

