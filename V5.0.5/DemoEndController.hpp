#ifndef UE4SS_SDK_DemoEndController_HPP
#define UE4SS_SDK_DemoEndController_HPP

class ADemoEndController_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    bool DemoPartOne;

    void InpActEvt_PC_Interact_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_PC_Confirm_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_PC_Back_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Generic_Pause_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_DemoEndController(int32 EntryPoint, FKey K2Node_InputActionEvent_Key_7, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, FKey K2Node_InputActionEvent_Key, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key_2, FKey K2Node_InputActionEvent_Key_3, FKey K2Node_InputActionEvent_Key_4, FKey K2Node_InputActionEvent_Key_5, FKey K2Node_InputActionEvent_Key_6);
}

#endif
