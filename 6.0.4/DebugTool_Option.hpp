#ifndef UE4SS_SDK_DebugTool_Option_HPP
#define UE4SS_SDK_DebugTool_Option_HPP

class UDebugTool_Option_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SideMoveLeft;
    class UWidgetAnimation* SideMove;
    class UWidgetAnimation* Select;
    class UWidgetAnimation* SelectedIdle;
    class UImage* Arrow_L;
    class UImage* Arrow_R;
    class UImage* Image_0;
    class UImage* Image_66;
    class UTextBlock* OptionText;
    class UTextBlock* Setting;
    class USizeBox* SizeBox_0;
    TArray<FString> Options;
    int32 Index;
    TArray<FString> OptionsCommands;
    float SlideBarValue;
    TEnumAsByte<DebugTool_Options::Type> CommandType;
    class UBlueFire_Game_Instance_C* GameInstance;
    TEnumAsByte<Items::Type> Item;
    class APlayer_Character_BP_C* PlayerCharacter;
    TEnumAsByte<Tunics::Type> Tunic;
    TArray<TEnumAsByte<CheckPoints::Type>> CheckPoints;
    TEnumAsByte<Abilities::Type> Abilities;
    TEnumAsByte<Weapons::Type> Weapons;
    TEnumAsByte<Spirits::Type> Amulets;
    bool FullStats;
    TArray<TEnumAsByte<Areas::Type>> MapsArray;
    FString Description;
    FLinearColor Color;
    class ADebugTools_Control_C* DebugControl;
    FTransform VoidPre;
    TArray<FName> TempVisibleAreas;
    class AVoid_Gate_C* VoidGate;
    TArray<TEnumAsByte<StreamingChunks::Type>> AllChunks;
    TArray<TEnumAsByte<Quests::Type>> Quests;
    TArray<FString> DebugVisibleLevels;
    bool VoidMaster;

    void On/Off(bool On);
    void Refresh();
    void SetInitialIndex();
    void ChangeSetting(bool Right);
    void UpdateTunicText(FString inString);
    void TunicSelector();
    void Weapon Selector();
    void AmuletSelector();
    void SetCamDistance();
    void SetCamOffset();
    void CheckFreeze();
    void HideArrows();
    void ConfirmAnim();
    void PlayChangeSettingSound();
    void ConfirmAnimDirect(bool Right);
    void Construct();
    void Confirm();
    void UpdateItemHas();
    void PreConstruct(bool IsDesignTime);
    void UpdateDescription();
    void ReConstruct();
    void Selected();
    void Unselected();
    void Update Levels Data(const TArray<FName>& Names);
    void ExecuteUbergraph_DebugTool_Option(int32 EntryPoint);
};

#endif
