// +liangaonb


#include "Global/AuraAssetManager.h"

UAuraAssetManager* UAuraAssetManager::Get()
{
	check(GEngine);
	return Cast<UAuraAssetManager>(GEngine->AssetManager);
}
