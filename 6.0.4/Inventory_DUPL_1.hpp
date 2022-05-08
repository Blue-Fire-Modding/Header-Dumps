#ifndef UE4SS_SDK_Inventory_DUPL_1_HPP
#define UE4SS_SDK_Inventory_DUPL_1_HPP

class UInventory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ResetControls;
    class UWidgetAnimation* FadeSaveBox;
    class UWidgetAnimation* FadeConfirmationBox;
    class UWidgetAnimation* FadeTabChange;
    class UWidgetAnimation* PC_RemapPromptFadeIn;
    class UWidgetAnimation* NewKeyPromptPC;
    class UWidgetAnimation* SpiritMessageanim;
    class UWidgetAnimation* JournalTabSwitch;
    class UWidgetAnimation* InventoryArrows;
    class UWidgetAnimation* AmuletRefresh;
    class UWidgetAnimation* SwordChange;
    class UWidgetAnimation* ChangeinventoryTabAnim;
    class UWidgetAnimation* DescriptionChange;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* ChangeTabAnim;
    class UCanvasPanel* Achievements;
    class UScrollBox* AchievementsScrollBox;
    class UAction_Remap_Option_C* Action_Remap_Option;
    class UAction_Remap_Option_C* Action_Remap_Option_1;
    class UBorder* ActionsBorder;
    class UBorder* ActionsBorder_1;
    class UBorder* ActionsBorder_2;
    class UQuest_Option_C* ActivatetheSteamFortressElevator;
    class UAmulet_C* Amulet;
    class UAmulet_C* Amulet_89;
    class UAmulet_C* Amulet_206;
    class UAmulet_C* Amulet_292;
    class UAmulet_C* Amulet_429;
    class UAmulet_C* Amulet_525;
    class UAmulet_C* Amulet_604;
    class UAmulet_C* Amulet_715;
    class UAmulet_C* Amulet_850;
    class UAmulet_C* Amulet_C_0;
    class UAmulet_C* Amulet_C_1;
    class UAmulet_C* Amulet_C_2;
    class UAmulet_C* Amulet_C_3;
    class UAmulet_C* Amulet_C_4;
    class UAmulet_C* Amulet_C_5;
    class UAmulet_C* Amulet_C_6;
    class UAmulet_C* Amulet_C_7;
    class UAmulet_C* Amulet_C_8;
    class UAmuletSlot_C* AmuletSlot;
    class UAmuletSlot_C* AmuletSlot_81;
    class UAmuletSlot_C* AmuletSlot_164;
    class UAmuletSlot_C* AmuletSlot_451;
    class UAmuletSlot_C* AmuletSlot_865;
    class UAmuletSlot_C* AmuletSlot_C_1068;
    class UHorizontalBox* AmuletSlotsBox;
    class UWrapBox* AmuletWrap;
    class UImage* ArrowLeft;
    class UImage* ArrowRight;
    class UImage* Bar_Bottom;
    class UImage* Bar_Top;
    class UQuest_Option_C* BarriRoses;
    class UQuest_Option_C* Beira;
    class UImage* BlackBackground;
    class UImage* BlackBackground_1;
    class UQuest_Option_C* BookHunting;
    class UBorder* Border_0;
    class UBorder* Border_45;
    class UQuest_Option_C* BremurPicture;
    class UTextBlock* Cash;
    class UTextBlock* Category;
    class UTextBlock* Center_Title;
    class UImage* CenterAmulet;
    class UImage* CircleA;
    class UImage* CircleB;
    class UImage* CircleC;
    class UImage* CircleD;
    class UQuest_Option_C* ClearallVoids;
    class UOverlay* ConfirmationBox;
    class UWidgetSwitcher* ControlPlatformSwitch;
    class UCanvasPanel* Controls;
    class UControlsUI_ProSwitch_C* ControlsUI_ProSwitch;
    class UControlsUI_PS_C* ControlsUI_PS;
    class UControlsUI_Stadia_C* ControlsUI_Stadia;
    class UControlsUI_Switch_C* ControlsUI_Switch;
    class UControlsUI_Xbox_C* ControlsUI_Xbox;
    class UTextBlock* CurrentJournalTab;
    class UWrapBox* CurrentStatWrapBox;
    class UTextBlock* Description;
    class UImage* DescriptionBar;
    class UBorder* DescriptionBorder;
    class UImage* DescriptionImage;
    class UQuest_Option_C* DestroytheGoddess;
    class UQuest_Option_C* DestroytheNuosCorruption;
    class UQuest_Option_C* DestroytheShadowLords;
    class UQuest_Option_C* DestroytheUthasCorruption;
    class UTextBlock* Disclaimer;
    class UQuest_Option_C* ElevatorDuties;
    class UQuest_Option_C* EnterTheVoid;
    class UWrapBox* FileSelectedConfirmationBox;
    class UWrapBox* FileSelectedConfirmationBox_1;
    class UQuest_Option_C* FindFaraMother;
    class UQuest_Option_C* FindTheNuosTemple;
    class UQuest_Option_C* FindtheUthasTemple;
    class UQuest_Option_C* FireGuardDoor;
    class UCanvasPanel* Game;
    class UScrollBox* GameOptionsScroll;
    class UWrapBox* Gamepad_KeyMap_Options;
    class UTextBlock* GamePercent;
    class UQuest_Option_C* GardenSanctuary;
    class UCanvasPanel* Godstones;
    class UScrollBox* GodStonesScrollBox;
    class UCanvasPanel* Graphics;
    class UScrollBox* GraphicsOptionsScroll;
    class UQuest_Option_C* GraveSanctuary;
    class UImage* Image;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_4;
    class UImage* Image_5;
    class UImage* Image_56;
    class UImage* Image_86;
    class UImage* Image_98;
    class UImage* Image_111;
    class UImage* Image_174;
    class UImage* Image_175;
    class UImage* Image_183;
    class UImage* Image_568;
    class UCanvasPanel* Inventory;
    class UInventory_GodStone_C* Inventory_GodStone_0;
    class UInventory_GodStone_C* Inventory_GodStone_1;
    class UInventory_GodStone_C* Inventory_GodStone_2;
    class UInventory_GodStone_C* Inventory_GodStone_3;
    class UInventory_GodStone_C* Inventory_GodStone_4;
    class UInventory_GodStone_C* Inventory_GodStone_5;
    class UInventory_GodStone_C* Inventory_GodStone_6;
    class UInventory_GodStone_C* Inventory_GodStone_7;
    class UInventory_GodStone_C* Inventory_GodStone_8;
    class UInventory_GodStone_C* Inventory_GodStone_9;
    class UInventory_GodStone_C* Inventory_GodStone_10;
    class UInventory_GodStone_C* Inventory_GodStone_11;
    class UInventory_GodStone_C* Inventory_GodStone_12;
    class UInventory_GodStone_C* Inventory_GodStone_13;
    class UInventory_GodStone_C* Inventory_GodStone_14;
    class UInventory_GodStone_C* Inventory_GodStone_15;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_16;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_17;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_18;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_19;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_20;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_21;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_22;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_23;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_24;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_25;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_26;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_27;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_28;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_29;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_30;
    class UInventory_GodStone_C* Inventory_GodStoneDLC_31;
    class UInventoryActionList_C* InventoryActionList;
    class UInventoryItemScreen_C* InventoryItemScreen;
    class UInventoryItemScreen_C* InventoryItemScreen_1;
    class UInventoryItemScreen_C* InventoryItemScreen_121;
    class UInventoryItemScreen_C* InventoryItemScreen_238;
    class UInventorySpacer_C* InventorySpacer_106;
    class UWrapBox* InventoryWrap;
    class UItemEffect_C* ItemEffect;
    class UItemEffect_C* ItemEffect_67;
    class UItemEffect_C* ItemEffect_151;
    class UItemEffect_C* ItemEffect_211;
    class UItemEffect_C* ItemEffect_288;
    class UItemEffect_C* ItemEffect_C_0;
    class UItemEffect_C* ItemEffect_C_1;
    class UItemEffect_C* ItemEffect_C_2;
    class UItemEffect_C* ItemEffect_C_3;
    class UItemEffect_C* ItemEffect_C_4;
    class UTextBlock* ItemName;
    class UCanvasPanel* Journal;
    class UWidgetSwitcher* JournalTabs;
    class UTextBlock* Left_Title;
    class UBorder* MainBorder;
    class UCanvasPanel* MainSettings;
    class UTextBlock* MappingNotePc;
    class UMenu_ConfirmationBox_C* Menu_ConfirmationBox_Left;
    class UMenu_ConfirmationBox_C* Menu_ConfirmationBox_Left_1;
    class UMenu_ConfirmationBox_C* Menu_ConfirmationBox_Right;
    class UQuest_Option_C* MonKeys;
    class UTextBlock* NextJournalTab;
    class UQuest_Option_C* Nuno;
    class UOptionMaster_C* OptionEffectsVol;
    class UOptionMaster_C* OptionIdleCamMovement;
    class UOptionMaster_C* OptionMaster_Antialising;
    class UOptionMaster_C* OptionMaster_C_1;
    class UOptionMaster_C* OptionMaster_C_2;
    class UOptionMaster_C* OptionMaster_C_5;
    class UOptionMaster_C* OptionMaster_CamAutoAdjust;
    class UOptionMaster_C* OptionMaster_CameraShakes;
    class UOptionMaster_C* OptionMaster_FPSLimit;
    class UOptionMaster_C* OptionMaster_Language;
    class UOptionMaster_C* OptionMaster_MotionBlur;
    class UOptionMaster_C* OptionMaster_PPQuality;
    class UOptionMaster_C* OptionMaster_RestoreDef;
    class UOptionMaster_C* OptionMaster_Rumble;
    class UOptionMaster_C* OptionMaster_ScreenMode;
    class UOptionMaster_C* OptionMaster_ShadowQuality;
    class UOptionMaster_C* OptionMaster_StadiaPerformance;
    class UOptionMaster_C* OptionMaster_TextureQuality;
    class UOptionMaster_C* OptionMaster_Timer;
    class UOptionMaster_C* OptionMasterScreenRes;
    class UOptionMaster_C* OptionMusicVol;
    class UOptionMaster_C* OptionSmoothCamRotation;
    class UQuest_Option_C* PaulaleConcert;
    class UCanvasPanel* PC;
    class UTextBlock* PC_ActionRemap;
    class UAction_Remap_Option_C* PC_Camera;
    class UAction_Remap_Option_C* PC_Camera_1;
    class UAction_Remap_Option_C* PC_Dash;
    class UAction_Remap_Option_C* PC_Dash_1;
    class UAction_Remap_Option_C* PC_EmoteMenu;
    class UAction_Remap_Option_C* PC_EmoteMenu_1;
    class UAction_Remap_Option_C* PC_Horizontal_Attack;
    class UAction_Remap_Option_C* PC_Horizontal_Attack_1;
    class UAction_Remap_Option_C* PC_Interact;
    class UAction_Remap_Option_C* PC_Interact_1;
    class UAction_Remap_Option_C* PC_Jump;
    class UAction_Remap_Option_C* PC_Jump_1;
    class UWrapBox* PC_KeyMap_Options;
    class UTextBlock* PC_KeyMappingPrompt;
    class UAction_Remap_Option_C* PC_Lock;
    class UAction_Remap_Option_C* PC_Lock_1;
    class UAction_Remap_Option_C* PC_LockSwitch;
    class UAction_Remap_Option_C* PC_LockSwitch_1;
    class UAction_Remap_Option_C* PC_Movement;
    class UAction_Remap_Option_C* PC_Movement_1;
    class UAction_Remap_Option_C* PC_Pause;
    class UAction_Remap_Option_C* PC_Pause_1;
    class UAction_Remap_Option_C* PC_QuickEmote;
    class UAction_Remap_Option_C* PC_QuickEmote_1;
    class UOverlay* PC_Remap_Prompt_NewKey;
    class UAction_Remap_Option_C* PC_RestoreHealth;
    class UAction_Remap_Option_C* PC_RestoreHealth_1;
    class UAction_Remap_Option_C* PC_Shield;
    class UAction_Remap_Option_C* PC_Shield_1;
    class UAction_Remap_Option_C* PC_Sprint;
    class UAction_Remap_Option_C* PC_Sprint_1;
    class UAction_Remap_Option_C* PC_Vertical_Attack;
    class UAction_Remap_Option_C* PC_Vertical_Attack_1;
    class UImage* PlayerImage;
    class UTextBlock* PreviousJournalTab;
    class UCanvasPanel* PS4;
    class UTextBlock* QuesProgress_1;
    class UOverlay* QuestDescriptionOverlay;
    class UImage* QuestImage;
    class UImage* QuestImageBar;
    class UTextBlock* QuestNames;
    class UCanvasPanel* Quests;
    class UScrollBox* QuestsScrollBox;
    class UTextBlock* QuestType;
    class UAction_Remap_Option_C* RestoreToDefaults;
    class UAction_Remap_Option_C* RestoreToDefaults_1;
    class URetainerBox* RetainerBox_0;
    class URichTextBlock* RichTextBlock_100;
    class UTextBlock* Right_Title;
    class UQuest_Option_C* Samael;
    class UOverlay* SaveBox;
    class USelectCommands_C* SelectCommands;
    class USelectCommands_C* SelectCommands_1;
    class USelectCommands_C* SelectCommands_77;
    class USelectCommands_C* SelectCommands_246;
    class UImage* SeparatorBar01;
    class UImage* SeparatorBar02;
    class UImage* SeperatorBar;
    class UCanvasPanel* Settings;
    class UTextBlock* SettingsDescription;
    class UWrapBox* SettingsMainWrap;
    class UWidgetSwitcher* SettingsSwitcher;
    class USettingsText_C* SettingsText;
    class USettingsText_C* SettingsText_0;
    class USettingsText_C* SettingsText_1;
    class USettingsText_C* SettingsText_2;
    class USettingsText_C* SettingsText_ExitGame;
    class USettingsText_C* SettingsText_ExitVoid;
    class USettingsText_C* SettingsText_Save;
    class UBorder* ShoulderTabsButtons;
    class UTextBlock* SpiritDescription;
    class UQuest_Option_C* SpiritHunting;
    class UTextBlock* SpiritName;
    class UTextBlock* SpiritReturn;
    class UTextBlock* SpiritReturn_1;
    class UCanvasPanel* Spirits;
    class UCanvasPanel* Stadia;
    class UCanvasPanel* StadiaGamepadMap;
    class UCanvasPanel* Stats;
    class UWrapBox* StatsWrapBox;
    class UCanvasPanel* Switch;
    class UCanvasPanel* SwitchPro;
    class UBorder* TabBorder;
    class UWidgetSwitcher* Tabs;
    class UImage* TabSwitcherIcon_Left;
    class UImage* TabSwitcherIcon_Right;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_4;
    class UQuest_Option_C* TheVoidOfSorrows;
    class UTextBlock* TimePlayed;
    class UTextBlock* UnsavedText;
    class UWrapBox* WrapBox_0;
    class UCanvasPanel* XboxPlatform;
    class UBlueFire_Game_Instance_C* GameInstance;
    class UPickUp_Action_UI_C* ActionWidget;
    int32 SelectedItem;
    TArray<class UInventoryItem_C*> InventoryItems;
    class APlayer_Camera_Control_C* CameraControl;
    TEnumAsByte<Tabs::Type> Tab;
    class APlayer_Character_BP_C* Player;
    int32 Percent;
    int32 SettingsMainSelectionIndex;
    int32 SettingsActiveTab;
    int32 SettingsGameSelectionIndex;
    int32 SettingsGraphicsSelectionIndex;
    int32 InventoryTab;
    int32 SelectedKeyItem;
    TArray<class UInventoryItem_C*> InventoryPassiveItems;
    int32 MaxPassiveItems;
    int32 SelectedSword;
    TArray<class UAmulet_C*> AmuletList;
    int32 SelectedAmulet;
    bool UsedAmuletSlot;
    bool SwordHovered;
    bool SwordSelectedConfirm;
    int32 SelectedWeapon;
    TArray<class UInventoryItem_C*> InventorySwords;
    bool SwordHas;
    int32 SelectedTunic;
    TArray<class UInventoryItem_C*> InventoryTunics;
    bool TunicHas;
    class APlayerRenderTargetModel_C* RenderTargetModel;
    class APlayerRenderTargetModel_C* RenderTargetModelAlpha;
    class AInventoryController_C* InventoryController;
    int32 JournalTab;
    int32 SelectedGodStone;
    int32 SelectedAchievement;
    TArray<class UInventory_GodStone_C*> GodStoneArray;
    bool ItemActionList;
    class UInventoryActionList_C* ItemActionListWidget;
    FVector2D Pos;
    TArray<class UWidget*> ToDelete;
    FInventory_CRemoveCall RemoveCall;
    void RemoveCall();
    FInventory_CChangeTabCall ChangeTabCall;
    void ChangeTabCall();
    TArray<class UQuest_Option_C*> QuestList;
    TArray<TEnumAsByte<Quests::Type>> Quest;
    int32 SelectedQuestIndex;
    TArray<class UWidget*> QuestChildren;
    int32 NItemsScreens;
    int32 NKeyItemsScreens;
    int32 NTunicsScreens;
    int32 NWeaponScreens;
    int32 CurrentScreenInCategory;
    bool Scroll;
    float CurrentScroll;
    float TargetScroll;
    bool KeyMapListen;
    int32 PCMapOptionSelectedIndex;
    FName PC_KeyToReMap;
    TArray<FName> PC_Default_KeysToMap;
    TArray<FKey> PC_Default_KeysToMapKeys;
    FKey PC_PreviousKey;
    bool KeyMapListenReady;
    TArray<FKey> PC_RemapBlockedKeys;
    int32 SelectedVoid;
    bool ConfirmationWaiting;
    FInventory_CConfirmationReturn ConfirmationReturn;
    void ConfirmationReturn(bool Condition);
    int32 ConfirmationSelection;
    bool SaveUIOn;
    float CustomDeltaTime;
    bool TimeFix;
    int32 LastSelected;
    class APlayerRenderTargetModelAlpha_C* RenderAlpha;
    class UControlsText_C* GamepadKey;
    FName GamepadKeyToReMap;
    TArray<FKey> GamepadDefaultKeysToMapKeys;
    TArray<FName> GamepadDefaultKeysToMap;
    TArray<FKey> GamepadRemapBlockedKeys;
    int32 StadiaMapOptionSelectedIndex;
    bool TempSaved;
    bool IsDLC;
    int32 SoundExcemption;
    bool UseMoveCursorSound;
    bool FixCloseIssue;

    FEventReply On_TabSwitcherIcon_Right_MouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply On_TabSwitcherIcon_Left_MouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void Remove(bool NoReturnInput, bool UnfreezeEnemies, bool ExitVoid);
    void MoveSelection(TEnumAsByte<Directions::Type> Direction);
    void Delete();
    void UpdateDescription(TEnumAsByte<InventoryItemType::Type> Type);
    void ChangeTab(bool Right, bool ReloadOnly, bool InitialLoad);
    void UpdateItemText(FText Description, FText Name, class UMaterialInterface* Material);
    void HideDescriptionBox();
    void Confirm(class APlayer_Character_BP_C* Target);
    void Back();
    void ThumbstickHorizontalMovement(bool Right);
    void MoveCursor();
    void MoveCursorError();
    void PCGamepadChange(bool PC);
    void Change();
    void SetTimer(bool SpeedTimer);
    void CheckDisclaimer();
    void Init(int32 SelectedItem, TEnumAsByte<Tabs::Type> Tab, int32 SettingsMainSelectionIndex, int32 SettingsActiveTab, int32 SettingsGameSelectionIndex, int32 SettingsGraphicsSelectionIndex, int32 InventoryTab, int32 SelectedKeyItem, int32 SelectedSword, int32 SelectedAmulet, int32 SelectedWeapon, int32 SelectedTunic, int32 JournalTab, int32 SelectedGodStone, int32 SelectedAchievement, int32 SelectedQuestIndex, int32 CurrentScreenInCategory, int32 SelectedVoid);
    void OnInitialized();
    void Update Void();
    void Set Time Played And Percent();
    void IsValid Move Cursor(bool IsValid);
    void StartJournalTab();
    void UpdateQuest();
    void Move(float AxisValue);
    void SetJournalTabName();
    void ChangeJournalTab(bool Right);
    void MoveJournalTabSelection(TEnumAsByte<Directions::Type> Direction, bool RefreshOnly);
    void SetJournalTabContent();
    void Remove Popup();
    void CustomTick(float DeltaTime);
    void RemoveInventoryOp();
    void RefreshTunics();
    void RefreshWeapons();
    void AnimateScroll(float TargetScroll);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void AddSplit();
    void AdjustPositionX(bool Pos);
    void AdjustPosition(bool Pos);
    void BackItemActionList();
    void InstantRemoveItemActionList();
    void LoadTunics();
    void LoadWeapons();
    void StartArrows();
    void ContinueAnimSwitchTab(bool Refresh);
    void InventoryConfirmInput(class APlayer_Character_BP_C* Player);
    void UpdateActionText(bool Valid);
    void QuickInventoryTabChange(bool Right);
    void LoadInventoryKeyItems();
    void LoadInventoryItems();
    void ChangeInventoryTab(bool Right, bool Refresh);
    void InventoryRecieveMovement(TEnumAsByte<Directions::Type> Directions, bool RefreshOnly);
    void SetInventoryContent();
    void DropItem();
    void EquipItem(class APlayer_Character_BP_C* Player);
    void UpdateAction();
    void UpdateSelectionCursor();
    void LoadItems();
    void PlayNavigationSoundWithLimits(int32 SelectionIndex, int32 LimitA, int32 LimitZ, class UAkAudioEvent* UI Sound, bool PrintIndex);
    void ExitVoid();
    void CustomEvent_1(bool Condition);
    void Stadia_ErrorMapping();
    void Stadia_ExitMapping();
    void Stadia_KeysRestoreToDefault();
    void Stadia_SetReMapKey(const FKey& InputPin);
    void Stadia_CancelRemap();
    void Stadia_EndReMap(bool OnlySelected);
    void Stadia_StartReMap();
    void Stadia_InitializeButtonMapping(bool OnlySelected);
    void ClickGamepadControlsChange();
    void ErrorMappingGamepad();
    void ExitMappingGamepad();
    void Gamepad_KeysRestoreToDefault();
    void Gamepad_SetRemapKey(const FKey& InputPin);
    void Gamepad_CancelRemap();
    void Gamepad_EndRemap(bool OnlySelected);
    void GamepadStartReMap();
    void Gamepad_InitializeButtonMapping(bool OnlySelected);
    void MoveGamepadControls(bool Refresh);
    void RefreshAllGame();
    void EnableInput();
    void DisableInput();
    void SaveUIOff();
    void SaveUI();
    void CustomEvent(bool Condition);
    void ConfirmationBoxRecieveMovement(bool Right, bool Refresh);
    void ConfirmationPopUpClick();
    void ReturnQuitMenu(bool Condition);
    void ConfirmationPopUp(ESlateVisibility InVisibilityForUnsaved);
    void RefreshAll();
    void ErrorMapping();
    void ExitMapping();
    void PC_KeysRestoreToDefault();
    void PC_SetRemapKey(const FKey& InputPin);
    void PC_CancelRemap();
    void PC_EndRemap(bool OnlySelected);
    void PC_StartRemap();
    void PC_InitializeButtonMapping(bool OnlySelected);
    void SetBottomSettingDescription(FText InText);
    void ChangeSettingsTab(int32 NewTab);
    void SettingsRecieveBack();
    void SettingsRecieveConfirmation();
    void SettingsRecieveMovement(TEnumAsByte<Directions::Type> Directions, bool RefreshOnly);
    void SpiritMessage(FText InText);
    void RecieveMouseHoverSpirit(int32 SelectedAmulet);
    void SpiritRefresh();
    void SpiritConfirmInput(class APlayer_Character_BP_C* Player);
    void UpdateWeaponActionText(bool Valid);
    void WeaponRecieveMovement(TEnumAsByte<Directions::Type> Directions, bool RefreshOnly);
    void BeginSpiritTab();
    void UpdateWeaponActions();
    void WeaponUpdateSelectionCursor();
    void ExecuteUbergraph_Inventory(int32 EntryPoint);
    void ConfirmationReturn__DelegateSignature(bool Condition);
    void ChangeTabCall__DelegateSignature();
    void RemoveCall__DelegateSignature();
};

#endif
