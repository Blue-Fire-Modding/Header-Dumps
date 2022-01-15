#ifndef UE4SS_SDK_BlueFireSaveGame_HPP
#define UE4SS_SDK_BlueFireSaveGame_HPP

class UBlueFireSaveGame_C : USaveGame
{
    FSave_GameSettings GameSettings;
    FSave_Settings Settings;
    FSave_PlayerAbilities PlayerAbilities;
    FSave_PlayerStats PlayerStats;
    FSave_GameStats GameStats;
    FSave_WorldStats WorldStats;
    FSave_System System;
    TArray<FInventory> ShopA;
    TArray<FInventory> ShopB;
    TArray<FInventory> ShopC;
    TArray<FInventory> ShopD;
    TArray<FInventory> ShopE;
    TArray<FInventory> ShopF;
    TArray<FInventory> ShopG;
    TArray<TEnumAsByte<Items::Type>> AlreadyPickedUpItems;
    FPlayer_Equipment PlayerEquipment;
    TArray<TEnumAsByte<E_Emotes::Type>> Emotes;
    TArray<TEnumAsByte<E_DailyQuest::Type>> Today DailyQuests;
    FDateTime LastPlayDay;
    int32 Selected Emote;
    FBuilding_Inventory_Stats Building_Inventory;
    TArray<FDressing_Pak> DressingSaves;
    TArray<FSaveQuest_Struct> Quests;
    FString Filename;
    FST_PlayerGhost PlayerGhost;
    TArray<FInventory> ShopH;
    bool HasBeatenGame;
    bool UseSpeedTimer;
    bool HasBeatedDLC_VoidMaster;
    TMap<FName, FST_AxisMapping> AxisMappings;
    TMap<FName, FST_ActionMapping> ActionMappings;
}

#endif
