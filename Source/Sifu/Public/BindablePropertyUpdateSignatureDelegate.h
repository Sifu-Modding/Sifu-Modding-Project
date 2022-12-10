#pragma once
#include "CoreMinimal.h"
#include "BindablePropertyUpdateSignatureDelegate.generated.h"

class UBindablePropertyBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBindablePropertyUpdateSignature, UBindablePropertyBase*, _property);

