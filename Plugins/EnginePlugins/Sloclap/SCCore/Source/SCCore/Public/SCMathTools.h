#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESCBlendType.h"
#include "ESCCardinalPoints.h"
#include "ESCRotationWay.h"
#include "SCMathTools.generated.h"

class UCurveFloat;
class USplineComponent;

UCLASS(Blueprintable)
class SCCORE_API USCMathTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCMathTools();
    UFUNCTION(BlueprintCallable)
    static FVector VectorCriticalSpringInterp(FVector _vCurrent, const FVector& _vTarget, UPARAM(Ref) FVector& _vInOutVelocity, float _fSpeedFactor, float _fDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SearchReciprocalValueInCurve(const UCurveFloat* _curve, const float _fY);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat Rotator_Quat(const FRotator& _rot);
    
    UFUNCTION(BlueprintCallable)
    static ESCCardinalPoints RotateCardinalPoint(const ESCCardinalPoints _eCardinalPoint, const int32 _iClockwiseSteps);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ProjectPointOnSegment(const FVector& _vA, const FVector& _vB, const FVector& _vPointToTest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ProjectPointOnLine(const FVector& _vA, const FVector& _vDir, const FVector& _vPointToTest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNearlyLesserOrEqual(float _fValueA, float _fValueB, float _fTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNearlyGreaterOrEqual(float _fValueA, float _fValueB, float _fTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLesserWithEpsilon(float _fValueA, float _fValueB, float _fTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsGreaterWithEpsilon(float _fValueA, float _fValueB, float _fTolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IntersectionSegmentSphereIntersection(FVector& _vOutIntersection1, FVector& _vOutIntersection2, const FVector& _vStart, const FVector& _vDirNormalized, float _vLength, const FVector& _vSphereOrigin, const float _fSphereRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IntersectionLineSphereIntersection(FVector& _vOutIntersection1, FVector& _vOutIntersection2, const FVector& _vLineDeltaPosition, const FVector& _vLineDirNormalized, const FVector& _vSphereOrigin, const float _fSphereRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IntersectionCircleCircle(FVector2D& _vOutPointA, FVector2D& _vOutPointB, const FVector2D& _vCenter1, const float _fRadius1, const FVector2D& _vCenter2, const float _fRadius2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetTransformLocalToGlobal(const FTransform& _transformBase, const FTransform& _localTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetTransformGlobalToLocal(const FTransform& _transformBase, const FTransform& _globalTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat GetQuatLocalToGlobal(const FQuat& _qBase, const FQuat& _qLocal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat GetQuatGlobalToLocal(const FQuat& _qBase, const FQuat& _qGlobal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat GetQuat(const FTransform& _transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPositionLocalToGlobal(const FTransform& _transformBase, const FVector& _localLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetPositionGlobalToLocal(const FTransform& _transformBase, const FVector& _globalLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlane GetPlaneFromDir(const FVector& _vLocation, const FVector& _vDir, float _fMaxSlopeAngleInRad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetLocalToGlobalRotator(const FRotator& _rotator, const FVector& _vLocal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetLocalToGlobal(const FQuat& _qBase, const FVector& _vLocal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetLocalLookAtYaw(const FVector& _fLookAtDirection, const float& _fRefBoneYawInDegrees, float _fMaxAngleInDegrees, bool _bAlwaysLookAt, float& _fOutLocalYaw, bool& _bOutIsLookAtValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetGlobalToLocalRotator(const FRotator& _rotator, const FVector& _vGlobal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetGlobalToLocal(const FQuat& _qBase, const FVector& _vGlobal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDiffAngleForceWay(float _fSource, float _fDest, ESCRotationWay _eBlendWay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDestinationAngleForceWay(float _fSource, float _fDest, ESCRotationWay _eBlendWay, int32 _iExtra2Pi);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBlendAngleForceWay(float _fSource, float _fDest, float _fBlendCoef, ESCRotationWay _eBlendWay, int32 _iExtra2Pi);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetBlendAngle(float _fSource, float _fDest, float _fBlendCoef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAngleNegPiToPi(float _fAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESCRotationWay GetAngleBlendWay(float _fSource, float _fDest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAngle2Pi(float _fAngle);
    
    UFUNCTION(BlueprintCallable)
    static float FloatCriticalSpringInterp(float _fCurrent, const float& _fTarget, UPARAM(Ref) float& _fInOutVelocity, float _fSpeedFactor, float _fDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Cursorized(float _fValue, float _fLeftMargin, float _fRightMargin, bool _bClamp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESCCardinalPoints ComputeCardinalPointWithCustomAngles(const FVector& _vRefDir, const FVector& _vOtherVector, float _fNorthAngleDeg, float _fSouthAngleDeg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESCCardinalPoints ComputeCardinalPointEastWest(const FVector& _vRefDir, const FVector& _vOtherVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESCCardinalPoints ComputeCardinalPoint(const FVector& _vRefDir, const FVector& _vOtherVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ComputeBlendRatio(float _fRatio, ESCBlendType _eBlendType, UCurveFloat* _blendCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_SetBitMaskFromIndex(int32 _iBitMask, int32 _iBitIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_HasBit(int32 _iBitMask, int32 _iBitIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetSplineRatioFromLocation(const FVector& _vLocation, const USplineComponent* _spline, float _fRangeMin, float _fRangeMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_GetBoundFromFloatRange(const FFloatRange& _FloatRange, float& _fOutLowerBoundValue, float& _fOutUpperBoundValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_CreateBitMaskFromIndex(int32 _iBitIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_ClearBitMaskFromIndex(int32 _iBitMask, int32 _iBitIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float AngleBetweenVectorHorizontal(FVector _v1Normalized, FVector _v2Normalized);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float AngleBetweenVectorAbsolute(FVector _v1Normalized, FVector _v2Normalized, FVector _vAxisNormalized);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void AngleBetweenVector(float& _fHorizontalAngle, float& _fVerticalAngle, FVector _v1Normalized, FVector _v2Normalized);
    
};

