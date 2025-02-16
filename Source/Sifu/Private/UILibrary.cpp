#include "UILibrary.h"

UUILibrary::UUILibrary() {
}

void UUILibrary::BPF_ShowPopup(const APlayerController* _playerController, FText _txtMessage, FText _txtConfirm, FText _txtCancel, FSCDynamicDelegate _onConfirm, FSCDynamicDelegate _onCancel) {
}

void UUILibrary::BPF_SetAllSCButtonsTintsInUserWidget(UUserWidget* _userWidget, FLinearColor _focusedColor, FLinearColor _noFocusColor) {
}

void UUILibrary::BPF_ProjectWorldLocationToScreen(APlayerController* _playerController, const FVector& _vInPosition, bool _bUseViewportBounds, float _fViewportBoundsOffset, FVector2D& _vOutScreenPosition, float& _fOutAngle, bool& _bOutIsOfScreen) {
}

bool UUILibrary::BPF_Intersect2DPositionWithViewportBounds(APlayerController* _playerController, const FVector2D& _vInPosition, FVector2D& _vOutIntersection, EIntersectDirection& _eOutIntersectDirection) {
    return false;
}

void UUILibrary::BPF_GetWidget2DPosFrom3D(UWidget* _widget, FVector _location, FVector _3DOffset, FVector2D _2DOffset, float _f2DMinY, FVector2D& _2DPos, bool& _2DProjSuccess) {
}

FVector2D UUILibrary::BPF_GetScreenCenterPos(UObject* _worldContextObject) {
    return FVector2D{};
}

FVector2D UUILibrary::BPF_GetEllipticPos(UObject* _worldContextObject, const FVector2D& _elipticRadius, float _fAngle) {
    return FVector2D{};
}

float UUILibrary::BPF_GetAngleToScreenPos(UObject* _worldContextObject, const FVector2D& _screenCenter, const FVector2D& _screenPos) {
    return 0.0f;
}

void UUILibrary::BPF_Get2DPosFrom3DBehindCam(const UObject* WorldContextObject, FVector _location, FVector _3DOffset, FVector2D _2DOffset, FVector2D& _2DPos, bool& _LocationInFrontOfCamera) {
}

void UUILibrary::BPF_Get2DPosFrom3D(APlayerController* _playerController, FVector _location, FVector _3DOffset, FVector2D _2DOffset, FVector2D& _2DPos, bool& _2DProjSuccess) {
}

void UUILibrary::BPF_ComputeWidgetPositionAndRotationFor3DPos(UObject* _worldContextObject, FVector _worldLocation, FVector2D _ellipticRadius, FVector _3DOffset, FVector2D _2DOffset, FVector2D& _vScreenPosition, bool& _bOnElipse, float& _fAngle) {
}

void UUILibrary::BPF_ClosePopup(const APlayerController* _playerController) {
}


