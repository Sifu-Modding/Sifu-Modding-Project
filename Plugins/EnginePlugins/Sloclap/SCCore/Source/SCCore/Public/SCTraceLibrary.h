#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "SCTraceLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class SCCORE_API USCTraceLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USCTraceLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SphereTraceMulti(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool LineTraceMulti(UObject* WorldContextObject, const FVector Start, const FVector End, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleTraceMulti(UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, float HalfHeight, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxTraceSingle(UObject* WorldContextObject, const FVector Start, const FVector End, const FVector HalfSize, const FRotator Orientation, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FHitResult& OutHit, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BoxTraceMulti(UObject* WorldContextObject, const FVector Start, const FVector End, FVector HalfSize, const FRotator Orientation, TEnumAsByte<ECollisionChannel> CollisionChannel, const FCollisionResponseContainer& CollisionResponse, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, TArray<FHitResult>& OutHits, bool bIgnoreSelf, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    
};

