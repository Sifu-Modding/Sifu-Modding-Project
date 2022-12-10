#pragma once
#include "CoreMinimal.h"
#include "InputAction.generated.h"

UENUM(BlueprintType)
enum class InputAction : uint8 {
    AttackLight,
    AttackLightHold,
    AttackLightAlt,
    AttackHeavy,
    AttackHeavyHold,
    AttackHeavyAlt,
    Guard,
    Dodge,
    Rush,
    Parry,
    Avoid,
    Absorb,
    Move,
    LockMove,
    MoveInterrupt,
    GuardInterrupt,
    Look,
    Lock,
    TargetSwitch,
    DesignateTarget,
    Cancel,
    SheatheDropWeapon,
    Action,
    DodgeMove,
    DodgeReorientation,
    MenuRemove,
    MenuCancel,
    AttackDetailsCancel,
    ParrySelection,
    AvoidSelection,
    PlayCombo,
    QuadrantChange,
    DrawWeapon,
    NextMenuPage,
    PreviousMenuPage,
    SpectatorMove,
    SpectatorLook,
    SpectatorLock,
    SpectatorDebug,
    VerticalStrafe,
    ChangeCameraSpeed,
    ChangeCameraFOV,
    ChangeCameraDamping,
    InGameMenu,
    UseItemRight,
    UseItemLeft,
    DropItem,
    LaunchEmote,
    ResetQuadrant,
    DebugMenu,
    FlyMode,
    MenuEdit,
    MenuRename,
    MenuPreview,
    StopTraining,
    MenuCopy,
    MenuPaste,
    CancelMatchmaking,
    MenuAction,
    MenuActionHold,
    DismissRequest,
    MenuToggleStats,
    Revive,
    Vanish,
    MenuNavigation,
    MouseLook,
    MouseWheelSelection,
    StanceMode,
    MenuStartTraining,
    MenuQuadrantChange,
    MenuToggleOverview,
    MenuStanceSelectionQuadrantChange,
    DrunkenAttack,
    DrunkenAttackPerfect,
    DrunkenAttackSelection,
    SpeedUpFlyMode,
    TutorialList,
    NextTutorialPage,
    PreviousTutorialPage,
    TutorialAction,
    TutorialCancel,
    SkipCinematic,
    TrainingNextWeapon,
    TrainingPrevWeapon,
    TrainingEdit,
    MenuActionTertiary,
    MenuActionSecondary,
    EmoteWheelSelectForEdition,
    StanceBL,
    StanceBR,
    StanceFL,
    StanceFR,
    AI_SpecialAttack,
    MenuDownSpectateNext,
    MenuDownSpectatePrevious,
    TakedownMode,
    TakedownValidation,
    PushObject,
    PickUpObject,
    ThrowObject,
    ThrowFromPickUp,
    DropObject,
    ContextualActionObject,
    ThrowContextualObject,
    ShowMovableInteractions,
    HideMovableInteractions,
    Grab,
    PushFromGrab,
    Traversal,
    AttackLightBackFront,
    AttackLightFrontFront,
    AttackLightFront,
    AttackHeavyBackFront,
    AttackHeavyFrontFront,
    AttackHeavyFront,
    DeflectGrab,
    AttackKnockdown,
    AttackKnockdownHold,
    AttackGrab,
    PrepFocus,
    PrepFocusHold,
    LaunchFocusExecution,
    ParryFromDown,
    DialogSentence0,
    DialogSentence1,
    DialogSentence2,
    NextAltMenuPage,
    PreviousAltMenuPage,
    FallInterrupt,
    AIDash,
    TestAction1,
    TestAction2,
    TestAction3,
    TestAction4,
    TestAction5,
    TestAction6,
    TestAction7,
    TestAction8,
    TestAction9,
    TestAction10,
    TestActionAxis1,
    TestActionAxis2,
    TestActionAxis3,
    TestActionAxis4,
    TestActionAxis5,
    LightRushAttack,
    DizzyReduction,
    Resume,
    AddKey,
    RemoveKey,
    EditCamera,
    SelectLeftKey,
    SelectRightKey,
    TimelineMoveBackward,
    TimelineMoveForward,
    Scrub,
    CounterGrab,
    SpectatorExit,
    FocusVitalPointSelection,
    EditorSpecialMenu,
    DodgeAttack,
    AttackLightGuard,
    AttackHeavyGuard,
    ReplayExport,
    ReplayMenu,
    PushbackCancel,
    CameraSettings,
    ApplySettings,
    ReplayTimelineMode,
    MenuActionSecondaryHold,
    Disengage,
    CameraZoom,
    CameraRoll,
    CycleUIMode,
    HeavyRushAttack,
    Taunt,
    HideUI,
    TakeScreenshot,
    LeaveMode,
    ApplyFocus,
    ParryInterrupt,
    AddSpeedKey,
    AddCut,
    GuardInterruptNoParry,
    RemoveCut,
    MoveKeyLeft,
    MoveKeyRight,
    MoveKey,
    SelectCurrentKey,
    TimelineZoom,
    Undo,
    Redo,
    CharacterSettings,
    ResetRoll,
    MenuOptions,
    MenuLeft,
    MenuRight,
    TutorialInput,
    BulletTime,
    BulletTimeFocus,
    StopRecording,
    SelectKey,
    JumpBounds,
    ReplayQuit,
    NavigationMode,
    BlendType,
    CameraType,
    Count,
    None,
};

