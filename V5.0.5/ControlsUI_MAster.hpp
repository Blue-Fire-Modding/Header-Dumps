#ifndef UE4SS_SDK_ControlsUI_MAster_HPP
#define UE4SS_SDK_ControlsUI_MAster_HPP

class UControlsUI_Master_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 SelectedActionIndex;
    TArray<UControlsText_C*> Actions;
    FControlsUI_Master_CMoveCursor MoveCursor;
    void MoveCursor(bool Error);
    bool CastToGameInstanceFailed;
    UBlueFire_Game_Instance_C* GameInstance;

    void GetGameInstanceReference(bool& Success, UBlueFire_Game_Instance_C*& GameInstance, bool CallFunc_Not_PreBool_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess);
    void CheckGameInstanceFailed(bool Bool, bool& Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Refresh(UPanelWidget* Canvas);
    void PreConstruct(bool IsDesignTime);
    void RefreshExtra();
    void ReceiveMovement(bool Refresh, uint8 Direction);
    void ExecuteUbergraph_ControlsUI_Master(int32 EntryPoint, bool K2Node_CustomEvent_refresh, uint8 K2Node_CustomEvent_Direction, bool K2Node_Event_IsDesignTime, UPanelWidget* K2Node_CustomEvent_Canvas);
    void MoveCursor__DelegateSignature(bool Error);
}

#endif
