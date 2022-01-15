#ifndef UE4SS_SDK_OrganController_HPP
#define UE4SS_SDK_OrganController_HPP

class AOrganController_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkOrganNote;
    USceneComponent* DefaultSceneRoot;
    AOrgan_C* OrganRef;
    TArray<USoundWave*> SoundArray;
    int32 OctaveIndex;
    bool BNotes;
    int32 Sharp;
    TArray<UAkAudioEvent*> NoteArray;
    UOrgan_UI_C* OrganUI;
    TArray<int32> OrganNoteID;
    TMap<FKey, int32> KeyMap;

    void GetNote(int32 Note, int32& Out, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2);
    void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_27(FKey Key);
    void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_26(FKey Key);
    void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_25(FKey Key);
    void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_24(FKey Key);
    void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_23(FKey Key);
    void InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_22(FKey Key);
    void InpActEvt_Generic_Pause_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_Generic_Up_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_Generic_Up_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_Generic_Down_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_Generic_Down_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_Generic_Right_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_Generic_Right_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Generic_Left_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_Generic_Left_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_21(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_20(FKey Key);
    void InpActEvt_LeftShift_K2Node_InputKeyEvent_19(FKey Key);
    void InpActEvt_LeftShift_K2Node_InputKeyEvent_18(FKey Key);
    void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_17(FKey Key);
    void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_16(FKey Key);
    void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_15(FKey Key);
    void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_14(FKey Key);
    void InpActEvt_SpaceBar_K2Node_InputKeyEvent_13(FKey Key);
    void InpActEvt_SpaceBar_K2Node_InputKeyEvent_12(FKey Key);
    void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11(FKey Key);
    void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_10(FKey Key);
    void InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_9(FKey Key);
    void InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_0(FKey Key);
    void PlayOrganNote(int32 Note, const FKey& Key);
    void ReceiveBeginPlay();
    void Update();
    void StopNote(const FKey& Key);
    void FixOctaves(int32 Note);
    void ResetOctavesSound();
    void ExecuteUbergraph_OrganController(int32 EntryPoint, FKey K2Node_InputKeyEvent_Key_20, FKey Temp_struct_Variable, FKey K2Node_InputKeyEvent_Key_19, FKey K2Node_InputKeyEvent_Key_18, FKey Temp_struct_Variable_1, FKey K2Node_InputKeyEvent_Key_17, FKey K2Node_InputKeyEvent_Key_16, FKey Temp_struct_Variable_2, UOrgan_UI_C* CallFunc_Create_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, FKey K2Node_InputKeyEvent_Key_15, FKey K2Node_InputKeyEvent_Key_14, FKey Temp_struct_Variable_3, FKey K2Node_InputKeyEvent_Key_13, FKey K2Node_InputKeyEvent_Key_12, FKey Temp_struct_Variable_4, int32 Temp_int_Variable_4, UAkAudioEvent* Temp_object_Variable, UAkAudioEvent* Temp_object_Variable_1, UAkAudioEvent* Temp_object_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_5, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, FKey K2Node_InputKeyEvent_Key_11, FKey K2Node_InputKeyEvent_Key_10, FKey Temp_struct_Variable_6, FKey K2Node_InputKeyEvent_Key_9, FKey K2Node_InputKeyEvent_Key_8, FKey Temp_struct_Variable_7, FKey K2Node_InputKeyEvent_Key_7, FKey K2Node_InputKeyEvent_Key_6, FKey Temp_struct_Variable_8, FKey K2Node_InputKeyEvent_Key_5, FKey K2Node_InputKeyEvent_Key_4, FKey Temp_struct_Variable_9, FKey K2Node_InputKeyEvent_Key_3, FKey K2Node_InputKeyEvent_Key_2, FKey Temp_struct_Variable_10, FKey K2Node_InputKeyEvent_Key_1, FKey K2Node_InputKeyEvent_Key, FKey Temp_struct_Variable_11, int32 Temp_int_Variable_5, UAkAudioEvent* Temp_object_Variable_3, UAkAudioEvent* Temp_object_Variable_4, UAkAudioEvent* Temp_object_Variable_5, int32 Temp_int_Variable_6, UAkAudioEvent* Temp_object_Variable_6, UAkAudioEvent* Temp_object_Variable_7, UAkAudioEvent* Temp_object_Variable_8, FKey K2Node_InputActionEvent_Key_3, FKey K2Node_InputActionEvent_Key_2, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key, FKey K2Node_InputActionEvent_Key_9, FKey Temp_struct_Variable_12, int32 K2Node_CustomEvent_Note_1, const FKey K2Node_CustomEvent_Key_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FKey K2Node_InputKeyEvent_Key_21, FKey K2Node_InputActionEvent_Key_10, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, FKey K2Node_InputActionEvent_Key_11, FString CallFunc_Conv_IntToString_ReturnValue, FKey K2Node_InputActionEvent_Key_12, FKey Temp_struct_Variable_13, FKey K2Node_InputActionEvent_Key_4, bool CallFunc_Key_IsGamepadKey_ReturnValue_1, UAkAudioEvent* CallFunc_Array_Get_Item, FKey K2Node_InputActionEvent_Key_5, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FKey Temp_struct_Variable_14, FKey K2Node_InputKeyEvent_Key_22, int32 K2Node_Select_Default, UAkAudioEvent* K2Node_Select_Default_1, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_GetNote_Out, int32 CallFunc_GetNote_Out_1, int32 CallFunc_GetNote_Out_2, int32 CallFunc_GetNote_Out_3, FKey K2Node_InputKeyEvent_Key_23, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FKey Temp_struct_Variable_15, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue_2, FKey Temp_struct_Variable_16, FKey K2Node_InputKeyEvent_Key_24, FKey K2Node_InputKeyEvent_Key_25, FKey K2Node_InputActionEvent_Key_6, FKey K2Node_InputActionEvent_Key_7, const FKey K2Node_CustomEvent_Key, bool CallFunc_Map_Remove_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue_2, int32 CallFunc_MakeLiteralInt_ReturnValue_3, FKey Temp_struct_Variable_17, bool CallFunc_Key_IsGamepadKey_ReturnValue_3, int32 K2Node_CustomEvent_Note, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, UAkAudioEvent* K2Node_Select_Default_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, UAkAudioEvent* K2Node_Select_Default_3, FKey K2Node_InputActionEvent_Key_8, int32 CallFunc_PostEventAtLocation_ReturnValue_3, FKey Temp_struct_Variable_18, FKey K2Node_InputKeyEvent_Key_26, FKey K2Node_InputKeyEvent_Key_27);
}

#endif
