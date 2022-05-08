#ifndef UE4SS_SDK_ControlsUI_MAster_HPP
#define UE4SS_SDK_ControlsUI_MAster_HPP

class UControlsUI_Master_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 SelectedActionIndex;
    TArray<class UControlsText_C*> Actions;
    FControlsUI_Master_CMoveCursor MoveCursor;
    void MoveCursor(bool Error);
    bool CastToGameInstanceFailed;
    class UBlueFire_Game_Instance_C* GameInstance;

    void GetGameInstanceReference(bool& Success, class UBlueFire_Game_Instance_C*& GameInstance);
    void CheckGameInstanceFailed(bool Bool, bool& Result);
    void Refresh(class UPanelWidget* Canvas);
    void PreConstruct(bool IsDesignTime);
    void RefreshExtra();
    void ReceiveMovement(bool Refresh, TEnumAsByte<Directions::Type> Direction);
    void ExecuteUbergraph_ControlsUI_Master(int32 EntryPoint);
    void MoveCursor__DelegateSignature(bool Error);
};

#endif
