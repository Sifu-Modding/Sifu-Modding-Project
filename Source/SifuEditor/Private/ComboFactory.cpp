// Fill out your copyright notice in the Description page of Project Settings.


#include "ComboFactory.h"
#include "Factories/Factory.h"
#include "AssetTypeCategories.h"
#include "Combo.h"

UComboFactory::UComboFactory()
{
    bCreateNew = true;
    bEditAfterNew = true;
    SupportedClass = UCombo::StaticClass();
}

uint32 UComboFactory::GetMenuCategories() const
{
    //Let's place this asset in the Blueprints category in the Editor
    return EAssetTypeCategories::Blueprint;
}

UObject* UComboFactory::FactoryCreateNew(UClass*
    InClass, UObject* InParent, FName InName, EObjectFlags
    Flags, UObject* Context, FFeedbackContext* Warn, FName
    CallingContext)
{
    auto NewObjectAsset = NewObject<UCombo>(InParent,
        InClass, InName, Flags);
    return NewObjectAsset;
}