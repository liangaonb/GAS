// +liangaonb


#include "Global/AuraAssetManager.h"
#include "Global/AuraGameplayTags.h"
#include "AbilitySystemGlobals.h"

UAuraAssetManager& UAuraAssetManager::Get()
{
	check(GEngine);
	return *Cast<UAuraAssetManager>(GEngine->AssetManager);
}

void UAuraAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	FAuraGameplayTags::InitializeNativeGameplayTags();

	// This is required to use Target Data.
	UAbilitySystemGlobals::Get().InitGlobalData();
}
