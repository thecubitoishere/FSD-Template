#include "CharacterSettings.h"

class UAsyncManager;
class UInventoryList;
class UPlayerCharacterID;

void UCharacterSettings::PreloadAllInventories(UAsyncManager* AsyncManager) {
}

UPlayerCharacterID* UCharacterSettings::GetPlayerCharacterID(const FGuid& ID) const {
    return NULL;
}

UInventoryList* UCharacterSettings::GetInventoryList(UPlayerCharacterID* characterID) const {
    return NULL;
}

UCharacterSettings::UCharacterSettings() {
    this->BoscoID = NULL;
    this->DefaultCharacterID = NULL;
    this->DefaultEditorCharacterID = NULL;
    this->NoHead = NULL;
    this->DefaultHead = NULL;
    this->ThickNeck = NULL;
    this->ThinNeck = NULL;
    this->ThrowItemAnimSettings = NULL;
    this->AutoReloadShout = NULL;
    this->TeleportPositioning = NULL;
    this->TeleportPlacement = NULL;
}

