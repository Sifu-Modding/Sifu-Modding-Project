#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "SCGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class SIFU_API USCGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    USCGameViewportClient();

};

