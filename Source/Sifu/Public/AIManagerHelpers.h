#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AISituationNamedActor.h"
#include "EAIPositioningOption.h"
#include "EArchetypeType.h"
#include "AIManagerHelpers.generated.h"

class AAIDirectorActor;
class AAISituationActor;
class AActor;
class UAIFightingComponent;
class UWorld;

UCLASS(Blueprintable)
class SIFU_API UAIManagerHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIManagerHelpers();

    UFUNCTION(BlueprintCallable)
    static void BPF_SetWantedArchetypeType(EArchetypeType _eWantedType);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetForceLastManPhase(const bool _bForceLastManPhase);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetAIPositioningOptionToggled(const AActor* _targetActor, EAIPositioningOption _eOption, bool _bToggled);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetAICanDropWeapon(bool _bCanDropWeapon);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_IsAIPositioningOptionToggled(const AActor* _targetActor, EAIPositioningOption _eOption);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetRemainingAisInActiveSituations(TArray<UAIFightingComponent*>& _outAiComponents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetRawLastManGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AAIDirectorActor* BPF_GetDirectorActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BPF_GetDifficultyLevelGauge();
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetAllAiSituations(TArray<AAISituationActor*>& _outAiSituations);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetAllAIFightingComponent(UWorld* _world, TArray<UAIFightingComponent*>& _outAIs);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetAllActiveAiSituations(TArray<AAISituationActor*>& _outAiSituations);
    
    UFUNCTION(BlueprintCallable)
    static AActor* BPF_GetAiSituationNamedActor(const UAIFightingComponent* _aiComponent, const FAISituationNamedActor& _name);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_GetAiSituationActors(TArray<AAISituationActor*>& _outAiSituations, const UAIFightingComponent* _aiComponent, bool _bIncludeAlertedSpawners);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_AllowStructureDamageOnAI(bool _bAllowStructureDamage);
    
};

