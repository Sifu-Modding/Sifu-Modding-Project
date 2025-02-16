#pragma once
#include "CoreMinimal.h"
#include "AIInfluenceTest.h"
#include "Templates/SubclassOf.h"
#include "ThrowAttackInfluenceTest.generated.h"

class AThrowableActor;
class UBaseWeaponData;

UCLASS(Blueprintable)
class SIFU_API UThrowAttackInfluenceTest : public UAIInfluenceTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AThrowableActor> m_ThrowableTypeToTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseWeaponData> m_WeaponDataTypeToTest;
    
public:
    UThrowAttackInfluenceTest();

};

