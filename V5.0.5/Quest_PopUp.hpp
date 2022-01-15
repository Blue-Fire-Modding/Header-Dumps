#ifndef UE4SS_SDK_Quest_PopUp_HPP
#define UE4SS_SDK_Quest_PopUp_HPP

class UQuest_PopUp_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* QuickFade;
    UWidgetAnimation* Text;
    UBorder* Border_InputQuest;
    UCanvasPanel* CanvasPanel_Root;
    UImage* Image_0;
    UImage* Image_127;
    UOverlay* Overlay_0;
    USpacer* Spacer_0;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_8;
    UTextBlock* TextBlock_78;
    UTextBlock* TextBlock_88;
    TEnumAsByte<Quests::Type> Quest;
    TEnumAsByte<QuestStatusType::Type> OperationType;
    FQuest_PopUp_CFinished Finished;
    void Finished();

    void Replay();
    void UpdateUI();
    void Finish();
    void QuickExit();
    void Construct();
    void OnAnimationFinished(const UWidgetAnimation* Animation);
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_Quest_PopUp(int32 EntryPoint, FText Temp_text_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FText Temp_text_Variable_1, uint8 Temp_byte_Variable, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText Temp_text_Variable_4, uint8 Temp_byte_Variable_1, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, PCGamepadChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, RemoveUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, AddUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable_1, FString CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FQuest_Struct CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FText K2Node_Select_Default, FText K2Node_Select_Default_1, int32 CallFunc_PostEventAtLocation_ReturnValue, FLinearColor K2Node_Select_Default_2, FSlateColor K2Node_MakeStruct_SlateColor, UMaterialInstance* CallFunc_GetUIPlatform_UIMaterial, bool CallFunc_GetUIPlatform_NonSquareSize, FVector2D CallFunc_GetUIPlatform_Size, const UWidgetAnimation* K2Node_Event_Animation, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FLinearColor K2Node_Select_Default_3, FSlateColor K2Node_MakeStruct_SlateColor_1);
    void Finished__DelegateSignature();
}

#endif
