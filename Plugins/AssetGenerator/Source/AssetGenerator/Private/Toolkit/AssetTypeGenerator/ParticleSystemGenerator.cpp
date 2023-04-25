#include "Toolkit/AssetTypeGenerator/ParticleSystemGenerator.h"
#include "Dom/JsonObject.h"
#include "Particles/ParticleSystem.h"

UClass* UParticleSystemGenerator::GetAssetObjectClass() const {
	return UParticleSystem::StaticClass();
}

void UParticleSystemGenerator::GetAdditionallyHandledAssetClasses(TArray<FName>& OutExtraAssetClasses) {
}

FName UParticleSystemGenerator::GetAssetClass() {
	return UParticleSystem::StaticClass()->GetFName();
}