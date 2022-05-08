#ifndef UE4SS_SDK_UniversalFunctions_HPP
#define UE4SS_SDK_UniversalFunctions_HPP

class UUniversalFunctions_C : public UBlueprintFunctionLibrary
{

    void Change Actor Target(class AActor* Actor, bool Can Target, class UObject* __WorldContext);
    void AddCurrencyObtained(int32 Currency, class UObject* __WorldContext);
    void AddCurrencySpentCounter(int32 CurrencySpent, class UObject* __WorldContext);
    void AddDeathCounter(class UObject* __WorldContext);
    void HaveDLCVoidMaster(class UObject* __WorldContext, bool& Result);
    void MoveWidgetToTop(class UUserWidget* Widget, class UObject* __WorldContext);
    void Get Blue Fire Player Controller(class UObject* __WorldContext, class APlayerController*& Player Controller);
    void GetAllChunks(class UObject* __WorldContext, TArray<TEnumAsByte<StreamingChunks::Type>>& Chunks);
    void GetBlueFireLanguage(bool Use Default Language, class UBlueFire_Game_Instance_C* Game Instance, class UObject* __WorldContext, int32& Index, FString& Language);
    void SetDefaultInputOkAndBack(class UBlueFire_Game_Instance_C* BlueFireGameInstance, class UObject* __WorldContext);
    void GetAllStreamingLevels(class UObject* __WorldContext, TArray<FName>& All Streaming Levels);
    void GetAreaFromChunk(TEnumAsByte<StreamingChunks::Type> Chunk, class UObject* __WorldContext, FString& Area);
    void GetChunkFromCheckpoint(TEnumAsByte<CheckPoints::Type> CheckPoint, class UObject* __WorldContext, TEnumAsByte<StreamingChunks::Type>& Chunk);
    void GetLevelsToLoadFromChunk(TEnumAsByte<StreamingChunks::Type> Chunk, bool DebugVoidDLC, class UObject* __WorldContext, TArray<FName>& All Levels);
    void GetVisibleAreasFromCheckpoint(TEnumAsByte<CheckPoints::Type> CheckPoint, class UObject* __WorldContext, TArray<FName>& Visible Areas);
    void GetChunkName(TEnumAsByte<StreamingChunks::Type> Area, class UObject* __WorldContext, FText& Name);
    void DeleteIDToCheckState(FString ID, bool HiddenSave, class UBlueFire_Game_Instance_C* Game Instance, class UObject* __WorldContext);
    void DisableLockHint(bool Disable, class UObject* __WorldContext);
    void GetEmote(const TEnumAsByte<E_Emotes::Type>& NewEmote, class UObject* __WorldContext);
    void IncreaseFireEssence(int32 Amount, class UObject* __WorldContext);
    void QuestStatus(TEnumAsByte<QuestStatusType::Type> Quest Operation, TEnumAsByte<Quests::Type> Prev Quest, TEnumAsByte<Quests::Type> New Quest, bool Silent, bool Achievement, class UObject* __WorldContext);
    void GetStatUpgradeClass(class UObject* __WorldContext, FPlayerStatsSimple& Movement, FPlayerStatsSimple& Attack, FPlayerStatsSimple& Defense);
    void GetAreaName(TEnumAsByte<Areas::Type> Area, class UObject* __WorldContext, FText& Name);
    void NextLevel(class UObject* __WorldContext);
    void AddLifeSlot(bool Animate, class UObject* __WorldContext);
    void SetItem(TEnumAsByte<Items::Type> Item, int32 Amount, bool KeyItem, bool IgnoreSpecialPopUp, class APlayer_Character_BP_C* PlayerReference, class UObject* __WorldContext, bool& Success, bool& SpecialPopUp);
    void GetCheckPointText(TEnumAsByte<CheckPoints::Type> CheckPoint, class UObject* __WorldContext, FText& Text);
    void GetAchievement(TEnumAsByte<Achievements::Type> Achievement, class UObject* __WorldContext);
    void GetSpiritSlot(int32 Amount, class UObject* __WorldContext);
    void GetAsset(TEnumAsByte<InventoryItemType::Type> Type, TEnumAsByte<Weapons::Type> Weapon, TEnumAsByte<Tunics::Type> Tunic, TEnumAsByte<Spirits::Type> Amulet, class UObject* __WorldContext, bool& Success, int32& Index);
    void HasCurrency(int32 CurrencyValue, bool ReduceIfTrue, bool SoundIfTrue, class UObject* __WorldContext, bool& TRUE);
    void GetUIPlatform(TEnumAsByte<PlatformInput::Type> Action-OLDInput, class UBlueFire_Game_Instance_C* BlueFireGameInstance, class UObject* __WorldContext, class UMaterialInstance*& UIMaterial, bool& NonSquareSize, FVector2D& Size);
    void HasGodStone(int32 Amount, class UObject* __WorldContext, bool& TRUE);
    void GlobalForceFeedback(TEnumAsByte<ForceFeedbackTypes::Type> Start, class UForceFeedbackEffect* ForceFeedbackEffect, class UObject* __WorldContext);
    void GlobalEffectCamAttack(class UObject* __WorldContext);
    void CromaHit(class UObject* __WorldContext);
    void SaveGame(bool HiddenSave, class UObject* __WorldContext);
    void ChangePCGamePad(class UObject* __WorldContext);
    void RemoveAbilityRecord(TEnumAsByte<Abilities::Type> Ability, class UObject* __WorldContext);
    void HasAbility(TEnumAsByte<Abilities::Type> Ability, class UObject* __WorldContext, bool& Yes);
    void HasItem(TEnumAsByte<Items::Type> Item, int32 Amount, bool KeyItem, class UObject* __WorldContext, bool& Success, int32& ItemAmount);
    void PlayerDistance(const class AActor* Actor, float Less Than Distance, class UObject* __WorldContext, bool& TRUE);
    void FreezeEnemies(bool Freeze, bool AlsoFreezeOrUnfreezePlayer, bool OnlyFreezeOrUnfreezePlayer, class UObject* __WorldContext);
    void NoInventorySpaceHUD(class UObject* __WorldContext);
    void DisplayHUDLoot(TEnumAsByte<Items::Type> Item, int32 Amount, class UObject* __WorldContext);
    void ToLower(FText Text, class UObject* __WorldContext, FText& Out);
    void CheckIfActionOK(class AActor* SelfRef, class UObject* __WorldContext, bool& Success);
    void AddRemoveAction(class AActor* SelfRef, bool Remove, class UObject* __WorldContext, bool& Success);
    void SetActionCharacter(class AActor* SelfRef, bool Remove, class UObject* __WorldContext, bool& Success);
    void GetGodStone(FString Name, FGodStone_Structure GodStoneInfo, class UObject* __WorldContext);
    void GetCurrency(int32 CurrencyValue, bool Sound, bool DoubleSpiritAffected, bool ShowInHUD, class UObject* __WorldContext, bool& Success);
    void PlayerHitLaunch(FVector HitOrigin, float Multiplier XY, float Multiplier Z, class UObject* __WorldContext);
    void GetNewAbilityRecord(TEnumAsByte<Abilities::Type> Ability, class UObject* __WorldContext);
    void GetItemHUD(TEnumAsByte<Items::Type> Item, int32 Amount, bool KeyItem, bool HasPickup, TEnumAsByte<InventoryItemType::Type> Type, TEnumAsByte<Tunics::Type> Tunic, TEnumAsByte<Weapons::Type> Weapon, TEnumAsByte<Spirits::Type> Amulet, TEnumAsByte<E_Emotes::Type> Emote, class UObject* __WorldContext, class UNewItem_C*& NewItemHud);
    void UseItem(TEnumAsByte<Items::Type> Item, int32 Amount, bool KeyItem, class APlayer_Character_BP_C* Player Reference, class UObject* __WorldContext, bool& Success, int32& CurrentAmount);
    void GetItem(TEnumAsByte<Items::Type> Item, int32 Amount, bool KeyItem, bool IgnoreSpecialPopUp, bool IgnoreAnimation, bool ConsumeOldItem, class APlayer_Character_BP_C* PlayerReference, class UObject* __WorldContext, bool& Success, bool& SpecialPopUp);
    void AddGamePercent(float Percent, FString PercentString, int32 PercentInt, class UObject* __WorldContext);
    void AddToResetDestroy(class AActor* Actor, class UObject* __WorldContext);
    void CheckStateLoadMenu(FString ID, class UBlueFireSaveGame_C* SaveObject, class UObject* __WorldContext, bool& Used);
    void [DEPRECATED]Save(bool HiddenSave, class AGlobal_Controller_C* Global Controller, bool Show HUD, class UObject* __WorldContext);
    void WriteIDToCheckState(FString ID, bool HiddenSave, class UBlueFire_Game_Instance_C* Game Instance, class AGlobal_Controller_C* Global Controller, bool Show HUD, class UObject* __WorldContext);
    void CheckState(FString ID, class UObject* __WorldContext, FString& Same ID, bool& Used);
    void UseSouls(int32 Currency, class UObject* __WorldContext, bool& Has);
    void GetSouls(int32 Currency, class UObject* __WorldContext);
    void ChangeFogColor(bool Revert, FLinearColor NewColor, float PlayRate, class UObject* __WorldContext);
    void FreezePlayer(bool Unfreeze, class UObject* __WorldContext);
    void Cutscene(bool Enter, FVector PointA, FVector PointB, bool RotatePlayer, class AActor* Cam, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendTime, bool ShowHUD, bool StopEnemies, bool Affect Timer, bool Lose Spin Charge, class UObject* __WorldContext, float& OutputPin);
    void Rotation 180 To 360(float Yaw Input, class UObject* __WorldContext, float& 0 - 360);
};

#endif
