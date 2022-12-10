#pragma once
#include "CoreMinimal.h"
#include "ButtonUnFocusedDelegate.generated.h"

class USCButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonUnFocused, USCButton*, _buttonUnfocused);

