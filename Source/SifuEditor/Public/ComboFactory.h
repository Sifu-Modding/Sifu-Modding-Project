// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "ComboFactory.generated.h"

/**
 * 
 */
UCLASS()
class SIFUEDITOR_API UComboFactory : public UFactory
{
    GENERATED_BODY()
public:
        UComboFactory();

        virtual uint32 GetMenuCategories() const override;

    virtual UObject* FactoryCreateNew(UClass* InClass,
        UObject* InParent, FName InName, EObjectFlags Flags,
        UObject* Context, FFeedbackContext* Warn, FName
        CallingContext) override;
	
};
