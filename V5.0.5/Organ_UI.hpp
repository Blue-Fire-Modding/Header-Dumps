#ifndef UE4SS_SDK_Organ_UI_HPP
#define UE4SS_SDK_Organ_UI_HPP

class UOrgan_UI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UOrgan_Key_UI_C* A;
    UOrgan_Key_UI_C* B;
    UOrgan_Key_UI_C* C;
    UOrgan_Key_UI_C* C2;
    UOrgan_Key_UI_C* D;
    UOrgan_Key_UI_C* E;
    UOrgan_Key_UI_C* F;
    UOrgan_Key_UI_C* G;
    UImage* Image_659;
    UImage* OctaveClimb;
    UImage* OctaveDown;
    UImage* OctaveUp;
    USelectCommands_C* SelectCommands;
    UImage* Sharp;
    UWrapBox* WrapBox_214;
    UBlueFire_Game_Instance_C* GameInstance;

    void ChangeOctave(int32 Octave);
    void UpdateNotes(int32 W, int32 A, int32 S, int32 D);
    void Remove();
    void UpdateKey(UOrgan_Key_UI_C* Key, int32 ButtonValue, int32 Black, int32 Note, uint8 Enum, int32 SharpButtonValue, int32 SharpNote, uint8 SharpEnum);
    void Construct();
    void GamepadChange();
    void RefreshNotes();
    void GamepadUpdate();
    void ExecuteUbergraph_Organ_UI(int32 EntryPoint, bool Temp_bool_Variable, uint8 Temp_byte_Variable, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, uint8 Temp_byte_Variable_2, PCGamepadChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, uint8 Temp_byte_Variable_3, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, UMaterialInterface* Temp_object_Variable_2, UMaterialInterface* Temp_object_Variable_3, UMaterialInterface* Temp_object_Variable_4, UMaterialInterface* Temp_object_Variable_5, UMaterialInterface* Temp_object_Variable_6, UMaterialInterface* Temp_object_Variable_7, uint8 Temp_byte_Variable_4, UMaterialInterface* Temp_object_Variable_8, UMaterialInterface* Temp_object_Variable_9, UMaterialInterface* Temp_object_Variable_10, UMaterialInterface* Temp_object_Variable_11, UMaterialInterface* Temp_object_Variable_12, UMaterialInterface* Temp_object_Variable_13, UMaterialInterface* Temp_object_Variable_14, UMaterialInterface* Temp_object_Variable_15, uint8 Temp_byte_Variable_5, UMaterialInterface* Temp_object_Variable_16, UMaterialInterface* Temp_object_Variable_17, UMaterialInterface* Temp_object_Variable_18, UMaterialInterface* Temp_object_Variable_19, UMaterialInterface* Temp_object_Variable_20, UMaterialInterface* Temp_object_Variable_21, UMaterialInterface* Temp_object_Variable_22, UMaterialInterface* Temp_object_Variable_23, uint8 Temp_byte_Variable_6, UMaterialInterface* Temp_object_Variable_24, UMaterialInterface* Temp_object_Variable_25, UMaterialInterface* Temp_object_Variable_26, UMaterialInterface* Temp_object_Variable_27, UMaterialInterface* Temp_object_Variable_28, UMaterialInterface* Temp_object_Variable_29, UMaterialInterface* Temp_object_Variable_30, UMaterialInterface* Temp_object_Variable_31, int32 K2Node_CustomEvent_Octave, float CallFunc_Multiply_IntFloat_ReturnValue, UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, FMargin K2Node_MakeStruct_Margin, int32 K2Node_CustomEvent_W, int32 K2Node_CustomEvent_A, int32 K2Node_CustomEvent_S, int32 K2Node_CustomEvent_D, UOrgan_Key_UI_C* K2Node_CustomEvent_Key, int32 K2Node_CustomEvent_ButtonValue, int32 K2Node_CustomEvent_Black, int32 K2Node_CustomEvent_Note, uint8 K2Node_CustomEvent_Enum, int32 K2Node_CustomEvent_SharpButtonValue, int32 K2Node_CustomEvent_SharpNote, uint8 K2Node_CustomEvent_SharpEnum, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, uint8 K2Node_Select_Default, uint8 K2Node_Select_Default_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, uint8 K2Node_Select_Default_2, uint8 K2Node_Select_Default_3, AGlobal_Controller_C* CallFunc_GetActorOfClass_ReturnValue, UMaterialInterface* K2Node_Select_Default_4, UMaterialInterface* K2Node_Select_Default_5, UMaterialInterface* K2Node_Select_Default_6, UMaterialInterface* K2Node_Select_Default_7);
}

#endif
