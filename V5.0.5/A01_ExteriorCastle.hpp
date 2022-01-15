#ifndef UE4SS_SDK_A01_ExteriorCastle_HPP
#define UE4SS_SDK_A01_ExteriorCastle_HPP

class AA01_ExteriorCastle_C : ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    float TimeToSkipCutscene;
    USkipCutscene_Action_UI_C* SkipCutsceneWidget;
    bool CanSkipCutscene;
    AGlobal_Controller_C* GlobalController;

    void InpActEvt_PC_Back_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void Credits();
    void Finish();
    void ExecuteUbergraph_A01_ExteriorCastle(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, ULevelStreaming* CallFunc_GetStreamingLevel_ReturnValue, Finish__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TArray<AGlobal_Controller_C*>& CallFunc_GetAllActorsOfClass_OutActors, USkipCutscene_Action_UI_C* CallFunc_Create_ReturnValue, AGlobal_Controller_C* CallFunc_Array_Get_Item, bool Temp_bool_IsClosed_Variable, FKey K2Node_InputActionEvent_Key, FKey K2Node_InputActionEvent_Key_1, UCreditsVoidMasterUI_C* CallFunc_Create_ReturnValue_1, UCreditsUI_C* CallFunc_Create_ReturnValue_2, ShowCredits__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2);
}

#endif
