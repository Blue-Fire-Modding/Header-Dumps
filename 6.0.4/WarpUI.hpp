#ifndef UE4SS_SDK_WarpUI_HPP
#define UE4SS_SDK_WarpUI_HPP

class UWarpUI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_69;
    class UImage* Image_86;
    class UImage* Image_161;
    class USelectCommands_C* SelectCommands;
    class UWarpOption_C* WarpOption;
    class UWarpOption_C* WarpOption_39;
    class UWarpOption_C* WarpOption_77;
    class UWarpOption_C* WarpOption_93;
    class UWarpOption_C* WarpOption_174;
    class UWarpOption_C* WarpOption_367;
    class UWarpOption_C* WarpOption_842;
    class UWarpOption_C* WarpOption_VoidGate;
    class UWrapBox* WrapBox_99;
    int32 Index;
    class APlayer_Character_BP_C* Player;
    class UBlueFire_Game_Instance_C* GameInstance;
    TArray<FString> Options;
    TArray<class UWarpOption_C*> CheckPointOptions;
    class AWarpUIController_C* Controller;
    bool HasCheckpoint;
    TArray<TEnumAsByte<CheckPoints::Type>> CheckPointsArray;
    TArray<FName> TempVisibleAreas;
    FWarpUI_CRemove Call Remove Call;
    void Remove Call();

    void SetCheckpoints();
    void MoveSelection(const bool Down, bool RefreshOnly);
    void Construct();
    void PCGamepadChange(TEnumAsByte<Platform::Type> Platform);
    void Confirm();
    void Back();
    void Remove();
    void ExitWarp();
    void ExecuteUbergraph_WarpUI(int32 EntryPoint);
    void Remove Call__DelegateSignature();
};

#endif
