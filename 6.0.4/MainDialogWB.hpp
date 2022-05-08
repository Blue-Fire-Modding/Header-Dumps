#ifndef UE4SS_SDK_MainDialogWB_HPP
#define UE4SS_SDK_MainDialogWB_HPP

class UMainDialogWB_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextFadeStyle;
    class UWidgetAnimation* PressOption;
    class UWidgetAnimation* ShowShop;
    class UWidgetAnimation* InventoryTabSwitch;
    class UWidgetAnimation* ActionsBorderFadeIn;
    class UWidgetAnimation* MainFade;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* AutomaticFadeIn;
    class UWidgetAnimation* GlowButton;
    class UTextBlock* AcceptAction;
    class UBorder* ActionsBorder;
    class URichTextBlock* ActualText;
    class UImage* Background;
    class UBorder* BorderResponses;
    class UBorder* BorderText;
    class UTextBlock* CancelAction;
    class UImage* CancelButton;
    class UTextBlock* Category;
    class UTextBlock* CharacterName;
    class UImage* CircleA;
    class UImage* CircleB;
    class UOverlay* Currency;
    class UTextBlock* CurrencyAmount;
    class UDialogOption_C* DialogOption;
    class UDialogOption_C* DialogOption_83;
    class UImage* Image;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    class UImage* Image_4;
    class UImage* Image_5;
    class UImage* Image_6;
    class UImage* Image_7;
    class UImage* Image_8;
    class UImage* Image_9;
    class UImage* Image_10;
    class UImage* Image_11;
    class UImage* Image_12;
    class UImage* Image_13;
    class UImage* Image_55;
    class UImage* Image_199;
    class UBorder* InventoryBorder;
    class UInventoryItem_C* InventoryItem;
    class UInventoryItem_C* InventoryItem_0;
    class UInventoryItem_C* InventoryItem_1;
    class UInventoryItem_C* InventoryItem_2;
    class UInventoryItem_C* InventoryItem_62;
    class UInventoryItem_C* InventoryItem_114;
    class UInventoryItem_C* InventoryItem_168;
    class UInventoryItem_C* InventoryItem_257;
    class UInventoryItem_C* InventoryItem_341;
    class UInventoryItem_C* InventoryItem_417;
    class UInventoryItem_C* InventoryItem_487;
    class UInventoryItem_C* InventoryItem_565;
    class UInventoryItem_C* InventoryItem_C_0;
    class UInventoryItem_C* InventoryItem_C_1;
    class UInventoryItem_C* InventoryItem_C_2;
    class UInventoryItem_C* InventoryItem_C_3;
    class UInventoryItem_C* InventoryItem_C_4;
    class UInventoryItem_C* InventoryItem_C_5;
    class UInventoryItem_C* InventoryItem_C_6;
    class UInventoryItem_C* InventoryItem_C_7;
    class UInventoryItem_C* InventoryItem_C_8;
    class UTextBlock* InventoryItemName;
    class UWidgetSwitcher* InventorySwitcher;
    class UWrapBox* ItemsBox;
    class UWrapBox* KeyItemsBox;
    class UBorder* MainBorder;
    class UImage* Ok;
    class UTextBlock* PlayerSouls;
    class UTextBlock* Price;
    class UWrapBox* ReponsesBox;
    class URichTextBlock* SetShape;
    class UBorder* ShopBorder;
    class UTextBlock* ShopCurrencyAmount;
    class UTextBlock* ShopCurrencyAmount_1;
    class UTextBlock* ShopDescription;
    class UImage* ShopItemMaterial;
    class UShopItemWBP_C* ShopItemWBP;
    class UShopItemWBP_C* ShopItemWBP_73;
    class UShopItemWBP_C* ShopItemWBP_186;
    class UShopItemWBP_C* ShopItemWBP_C_0;
    class UShopItemWBP_C* ShopItemWBP_C_1;
    class UShopItemWBP_C* ShopItemWBP_C_2;
    class UTextBlock* ShopMainItem;
    class UScrollBox* ShopScrollBox;
    class UImage* SimpleGlow;
    class UTextBlock* SwordDamage;
    class UTextBlock* TextBlock_0;
    float Speed;
    FMainDialogWB_CExitDialog ExitDialog;
    void ExitDialog();
    bool MessageFinished;
    bool LastLine;
    int32 CurrentLine;
    int32 TotalLines;
    TArray<FText> Text;
    class AMainDialogController_C* TextController;
    bool NextCharacterIsMarker;
    TEnumAsByte<TextMarkerTypes::Type> Markertype;
    class UTextBlock* CurrentTextBox;
    FLinearColor TextColor;
    class UObject* GameInstanceRef;
    uint8 InputImageEnum;
    bool MessageIsQuestion;
    bool QuestionYesSelected;
    int32 QuestionRepeatLine;
    bool NoDelay;
    FMainDialogWB_CNextLineED NextLineED;
    void NextLineED(int32 CurrentLine);
    float AutoTimeDuration;
    bool FadeStyle;
    float AutoTimeTillNext;
    TEnumAsByte<TextMarkerTypes::Type> QuestionResponseAction;
    FMainDialogWB_CFinished Finished;
    void Finished();
    TArray<FText> Responses;
    int32 SelectedOptionIndex;
    bool Visible;
    class UDialogText_C* InvisibleText;
    int32 InventoryTab;
    class UBlueFire_Game_Instance_C* GameInstance;
    TArray<class UInventoryItem_C*> InventoryItems;
    int32 SelectedItem;
    int32 SelectedKeyItem;
    TArray<class UInventoryItem_C*> InventoryPassiveItems;
    int32 MaxPassiveItems;
    bool PlayerSell;
    bool PlayerBuy;
    TEnumAsByte<DialogType::Type> DialogType;
    TArray<class UShopItemWBP_C*> ShopItems;
    TArray<FInventory> ShopInventory;
    int32 SelectedShopItem;
    int32 Amount;
    TEnumAsByte<DialogType::Type> InternalDialogType;
    FText NPCName;
    bool SellConfirmation;
    int32 WorldShop;
    bool SellMoment;
    bool ShopsOpen;
    class UAkAudioEvent* AkEvent;
    bool UseAkSoundsArray;
    TArray<class UAkAudioEvent*> AkSoundsArray;
    float TickCounter;
    int32 SellItemAmount;
    bool TextLineStop;
    bool CanPressConfirmInput;
    FMainDialogWB_CAbilityUnlock AbilityUnlock;
    void AbilityUnlock(TEnumAsByte<Abilities::Type> Ability);
    TEnumAsByte<Abilities::Type> UnlockedAbility;
    FMainDialogWB_COptionChange OptionChange;
    void OptionChange(int32 CurrentOption);
    FMainDialogWB_CLastLineCall LastLineCall;
    void LastLineCall();
    class AActor* Owner;
    bool CustomOptionTexts;
    TArray<FText> CustomOptionArrayText;
    float TextOpacity;
    class ANPCBound_C* Bound;
    FMainDialogWB_CExit Exit;
    void Exit();
    bool OpenBracket;
    bool CutsceneTextStyle;
    class APlayer_Character_BP_C* Player;
    bool ShowCurrencyOnQuestion;
    FString SpecialString;
    FString SpecialStringB;
    int32 SpecialStringSwitcher;
    bool IsRareShop;
    bool ShowItemNNotCurrency;
    TEnumAsByte<Items::Type> ItemToShow;
    int32 InventoryLength;
    bool ShopReload;

    void WriteShopArrayToGI(TArray<FInventory>& Shop);
    void GetShopArray(TArray<FInventory>& Array);
    void Continue();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Write(const FText& InText);
    void UpdateActions(FText CancelAction, FText AcceptAction);
    void HideActions();
    void InitializeShop();
    void LoadShopItems();
    void UpdateShopSelectionCursor();
    void ShopMoveSelection(TEnumAsByte<Directions::Type> Directions, bool RefreshOnly);
    void UpdateShopItemDescription();
    void ShowShopCurrency();
    void EndShop();
    void ShopConfirmInput();
    void ReloadShop();
    void ContSell(int32 SellItemAmount);
    void UpdateShopText(FText Name, FText Description, class UMaterialInterface* Material);
    void DirectSellOrb();
    void CloseTick();
    void UpdateInventorySelectionCursor();
    void UpdateInventoryAction();
    void InventoryRecieveMovement(TEnumAsByte<Directions::Type> Directions, bool RefreshOnly);
    void ChangeInventoryTab(bool Right, bool Refresh);
    void LoadInventoryItems();
    void LoadInventoryKeyItems();
    void QuickInventoryTabChange(bool Right);
    void InventoryConfirmInput();
    void UpdateInventoryDescription();
    void UpdateInventoryItemText(FText Description, FText Name);
    void HideInventoryDescriptionBox();
    void InitializeInventory();
    void LoadInventoryCurrency();
    void EndInventory();
    void ReloadInventory();
    void ReloadShopDelegate();
    void Remove();
    void NewTextLine(const TArray<FText>& TextLines, FText NPCName, const TArray<FText>& Responses, int32 SelectedOptionIndex, TEnumAsByte<DialogType::Type> DialogType, int32 Shop, bool Center, class UAkAudioEvent* AkEvent, bool UseAkSoundsArray, const TArray<class UAkAudioEvent*>& AkEvents, bool CustomOptionTexts, TArray<FText>& CustomOptionArray, bool FadeStyle, bool ShowCurrencyOnQuestion, TEnumAsByte<Items::Type> Item, bool ShowItemNNotCurrency);
    void NextLine();
    void RecieveConfirmationInput();
    void OptionVerticalMovement(TEnumAsByte<Directions::Type> Direction);
    void NextLineShow();
    void SpawnControl();
    void Construct();
    void ShowDialogUI();
    void HideDialogUI();
    void OkVisible();
    void OkHidden();
    void TextConfirmation();
    void RecieveMovementInput(TEnumAsByte<Directions::Type> Direction);
    void RecieveCancelInput();
    void RecieveThumbstickRInput(TEnumAsByte<Directions::Type> Index);
    void InitializeShops();
    void HideShops();
    void TextLine(const TArray<FText>& TextLines, const TArray<FText>& Responses, int32 SelectedOptionIndex, TEnumAsByte<DialogType::Type> DialogType);
    void NewInternalTextLine(const TArray<FText>& TextLines, const TArray<FText>& Responses, int32 SelectedOptionIndex, TEnumAsByte<DialogType::Type> DialogType);
    void OptionsChangeAmount(bool Right, const bool Max);
    void RepeatShop();
    void OptionClick();
    void SetAction();
    void ResetShopInitialize();
    void CursorMoveError();
    void SetPlatformIcon();
    void EndWrite();
    void AllowNextLine();
    void OptionChangeText(const TArray<FText>& Text);
    void NoBackground();
    void Update HUD();
    void GodMode(bool BlackText, float In Position Y);
    void ExecuteUbergraph_MainDialogWB(int32 EntryPoint);
    void Exit__DelegateSignature();
    void LastLineCall__DelegateSignature();
    void OptionChange__DelegateSignature(int32 CurrentOption);
    void AbilityUnlock__DelegateSignature(TEnumAsByte<Abilities::Type> Ability);
    void Finished__DelegateSignature();
    void NextLineED__DelegateSignature(int32 CurrentLine);
    void ExitDialog__DelegateSignature();
};

#endif