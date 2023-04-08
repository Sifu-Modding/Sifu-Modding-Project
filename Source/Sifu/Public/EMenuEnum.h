#pragma once
#include "CoreMinimal.h"
#include "EMenuEnum.generated.h"

UENUM(BlueprintType)
enum class EMenuEnum : uint8 {
    InGameMenu,
    InGameEquipment,
    InGameCombatDeck,
    InGameInventory,
    InGameStatus,
    InGameOption,
    InGameQuit,
    CombatDeckTraining,
    CombatDeckStanceSelection,
    CombatDeckStanceEdition,
    CombatDeckAttackSelection,
    EndGameMenu,
    AltarMenu,
    DownMenu,
    GameModeSelectionMenu,
    StartupMenu,
    InGameSocial,
    InGameGraphicOptions,
    CreateSchool,
    SchoolMenu,
    LoadCheckpointMenu,
    InGameInputsMapping,
    Credits,
    GameplayOptionMenu,
    LootBoxMenu,
    ShopMenu,
    DeathMenu,
    EndDemoMenu,
    DemoPreStartMenu,
    SoundOptionsMenu,
    CombosMenu,
    PressStartMenu,
    CoreOptionsMenu,
    SelectGenderMenu,
    CityView,
    DetectiveBoard,
    HideoutSnapshotSelection,
    Remapping,
    ReplayMenu,
    LoadSaveMenu,
    NewGameMenu,
    DisplayOptionsMenu,
    LanguageOptionsMenu,
    InvestigationBoard,
    CheatMenu,
    ReplayManagementMenu,
    Outfit,
    ArenaMain,
    ArenaOutro,
    Training_ModeSelection,
    ArenaPauseMenu,
    LessonMenu,
    Count,
    None,
};

