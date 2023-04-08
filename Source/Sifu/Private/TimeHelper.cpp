#include "TimeHelper.h"

class UObject;
class UWorld;

float UTimeHelper::GetDiffBetweenToDateTimeInSeconds(const FDateTime& _dateTimeA, const FDateTime& _dateTimeB) {
    return 0.0f;
}

FDateTime UTimeHelper::GetCurrentSynchedTimeInDateTime(const UWorld* _world) {
    return FDateTime{};
}

float UTimeHelper::BPF_GetDeltaTimeSlowMotionIndependant(UObject* _worldContextObject, float _fCurrentDt, float _fSlowMotionFactor) {
    return 0.0f;
}

FText UTimeHelper::BPF_AsTimeZoneTime(const FDateTime& _inDateTime, const ESCDateTimeTextStyle _eDateStyle, const ESCDateTimeTextStyle _eTimeStyle) {
    return FText::GetEmpty();
}

FText UTimeHelper::BPF_AsTimeZoneDate(const FDateTime& _inDateTime, const ESCDateTimeTextStyle _eDateStyle) {
    return FText::GetEmpty();
}

FDateTime UTimeHelper::AddDelayToDateTime(const FDateTime& _dateTime, float _fDelayInSeconds) {
    return FDateTime{};
}

UTimeHelper::UTimeHelper() {
}

