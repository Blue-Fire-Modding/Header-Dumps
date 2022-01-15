#ifndef UE4SS_SDK_DemoTextTutorial_HPP
#define UE4SS_SDK_DemoTextTutorial_HPP

class UDemoTextTutorial_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Idle;
    UWidgetAnimation* FadeIn;
    UImage* Background;
    UImage* Bar;
    UCanvasPanel* CanvasPanel_0;
    UImage* Image_512;
    UTextBlock* Title;
    UTutorialImage_C* TutorialImage;
    UTutorialImage_C* TutorialImage_212;
    UTutorialImage_C* TutorialImage_382;
    UWrapBox* WrapBox_92;
    TEnumAsByte<TutorialList::Type> Type;
    APlayer_Character_BP_C* Player;
    FDemoTextTutorial_CRemoved Removed;
    void Removed();
    TArray<FTutorialStructure> Array;

    void Play(uint8 Type);
    void PlayContinue(const TArray<FTutorialStructure>& Tut);
    void Remove();
    void updateButtons();
    void Refresh();
    void Construct();
    void ExecuteUbergraph_DemoTextTutorial(int32 EntryPoint, FTutorialStructure K2Node_MakeStruct_TutorialStructure, TArray<FTutorialStructure>& K2Node_MakeArray_Array, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, FText Temp_text_Variable_5, FText Temp_text_Variable_6, FText Temp_text_Variable_7, FText Temp_text_Variable_8, FText Temp_text_Variable_9, FText Temp_text_Variable_10, FText Temp_text_Variable_11, FText Temp_text_Variable_12, FText Temp_text_Variable_13, FText Temp_text_Variable_14, FText Temp_text_Variable_15, FText Temp_text_Variable_16, FText Temp_text_Variable_17, UTutorialImage_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, PCGamepadChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FText Temp_text_Variable_18, FText Temp_text_Variable_19, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, uint8 K2Node_CustomEvent_Type, const TArray<FTutorialStructure>& K2Node_CustomEvent_Tut, int32 CallFunc_Array_Length_ReturnValue, uint8 Temp_byte_Variable, UPanelSlot* CallFunc_AddChild_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FText Temp_text_Variable_20, FTutorialStructure K2Node_MakeStruct_TutorialStructure_1, TArray<FTutorialStructure>& K2Node_MakeArray_Array_1, FTutorialStructure K2Node_MakeStruct_TutorialStructure_2, TArray<FTutorialStructure>& K2Node_MakeArray_Array_2, FTutorialStructure K2Node_MakeStruct_TutorialStructure_3, TArray<FTutorialStructure>& K2Node_MakeArray_Array_3, FTutorialStructure K2Node_MakeStruct_TutorialStructure_4, TArray<FTutorialStructure>& K2Node_MakeArray_Array_4, FTutorialStructure K2Node_MakeStruct_TutorialStructure_5, FTutorialStructure K2Node_MakeStruct_TutorialStructure_6, FTutorialStructure K2Node_MakeStruct_TutorialStructure_7, TArray<FTutorialStructure>& K2Node_MakeArray_Array_5, TArray<FTutorialStructure>& K2Node_MakeArray_Array_6, FTutorialStructure K2Node_MakeStruct_TutorialStructure_8, FTutorialStructure K2Node_MakeStruct_TutorialStructure_9, TArray<FTutorialStructure>& K2Node_MakeArray_Array_7, FTutorialStructure K2Node_MakeStruct_TutorialStructure_10, TArray<FTutorialStructure>& K2Node_MakeArray_Array_8, FTutorialStructure K2Node_MakeStruct_TutorialStructure_11, TArray<FTutorialStructure>& K2Node_MakeArray_Array_9, FTutorialStructure K2Node_MakeStruct_TutorialStructure_12, TArray<FTutorialStructure>& K2Node_MakeArray_Array_10, FTutorialStructure K2Node_MakeStruct_TutorialStructure_13, FTutorialStructure K2Node_MakeStruct_TutorialStructure_14, FTutorialStructure K2Node_MakeStruct_TutorialStructure_15, TArray<FTutorialStructure>& K2Node_MakeArray_Array_11, TArray<FTutorialStructure>& K2Node_MakeArray_Array_12, FTutorialStructure K2Node_MakeStruct_TutorialStructure_16, FTutorialStructure K2Node_MakeStruct_TutorialStructure_17, TArray<FTutorialStructure>& K2Node_MakeArray_Array_13, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Array_Index_Variable, FTutorialStructure CallFunc_Array_Get_Item, FTutorialStructure K2Node_MakeStruct_TutorialStructure_18, TArray<FTutorialStructure>& K2Node_MakeArray_Array_14, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial, bool CallFunc_GetUIPlatform_NonSquareSize, FVector2D CallFunc_GetUIPlatform_Size, FText Temp_text_Variable_21, FTutorialStructure K2Node_MakeStruct_TutorialStructure_19, FTutorialStructure K2Node_MakeStruct_TutorialStructure_20, FTutorialStructure K2Node_MakeStruct_TutorialStructure_21, TArray<FTutorialStructure>& K2Node_MakeArray_Array_15, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial_1, bool CallFunc_GetUIPlatform_NonSquareSize_1, FVector2D CallFunc_GetUIPlatform_Size_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, FTutorialStructure K2Node_MakeStruct_TutorialStructure_22, FText Temp_text_Variable_22, FTutorialStructure K2Node_MakeStruct_TutorialStructure_23, TArray<FTutorialStructure>& K2Node_MakeArray_Array_16, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FTutorialStructure K2Node_MakeStruct_TutorialStructure_24, FText K2Node_Select_Default, TArray<FTutorialStructure>& K2Node_MakeArray_Array_17, FTutorialStructure K2Node_MakeStruct_TutorialStructure_25, TArray<FTutorialStructure>& K2Node_MakeArray_Array_18, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FTutorialStructure K2Node_MakeStruct_TutorialStructure_26, FText CallFunc_MakeLiteralText_ReturnValue, TArray<FTutorialStructure>& K2Node_MakeArray_Array_19, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue_2, FString CallFunc_Conv_TextToString_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_1, FText Temp_text_Variable_23, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3, FText K2Node_Select_Default_1, FText CallFunc_Conv_StringToText_ReturnValue, FTutorialStructure K2Node_MakeStruct_TutorialStructure_27, TArray<FTutorialStructure>& K2Node_MakeArray_Array_20);
    void Removed__DelegateSignature();
}

#endif
