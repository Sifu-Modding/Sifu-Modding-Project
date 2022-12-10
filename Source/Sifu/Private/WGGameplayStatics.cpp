#include "WGGameplayStatics.h"

class ACharacter;

FName UWGGameplayStatics::BPF_StartConversation(ACharacter* _character, FName _startingSegment, const bool _bGenericSubtitles, ACharacter* _secondary, bool _bCutOtherDialogs, bool _bLookAtEnabled, bool _bIgnoreCharacterCanSpeak) {
    return NAME_None;
}

void UWGGameplayStatics::BPF_SetGameDifficulty(EGameDifficulty _eDifficulty) {
}

EGameDifficulty UWGGameplayStatics::BPF_GetGameDifficulty(bool _bNeedSaveGame) {
    return EGameDifficulty::Normal;
}

void UWGGameplayStatics::BPF_CutDialog() {
}

bool UWGGameplayStatics::BPF_CorsairSetState(const FString& _event) {
    return false;
}

bool UWGGameplayStatics::BPF_CorsairSetGame(const FString& _gameName) {
    return false;
}

bool UWGGameplayStatics::BPF_CorsairSetEvent(const FString& _event) {
    return false;
}

bool UWGGameplayStatics::BPF_CorsairRequestControl() {
    return false;
}

void UWGGameplayStatics::BPF_CorsairPerformProtocolHandshake() {
}

bool UWGGameplayStatics::BPF_CorsairClearState(const FString& _event) {
    return false;
}

bool UWGGameplayStatics::BPF_CorsairClearAllStates() {
    return false;
}

UWGGameplayStatics::UWGGameplayStatics() {
}

