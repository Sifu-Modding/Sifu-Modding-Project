#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MessageManager.generated.h"

class UMessengerComponent;

UCLASS()
class SIFU_API UMessageManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UMessengerComponent* m_MessengerComponent;
    
public:
    UMessageManager();
};

