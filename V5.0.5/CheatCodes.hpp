#ifndef UE4SS_SDK_CheatCodes_HPP
#define UE4SS_SDK_CheatCodes_HPP

class UCheatCodes_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UEditableTextBox* EditableTextBox_112;
    FCheatCodes_CSubmit Submit;
    void Submit(FString String);
    UBlueFire_Game_Instance_C* GameInstance;

    void Construct();
    void BndEvt__EditableTextBox_112_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, uint8 CommitMethod);
    void End(const FText& Text, uint8 CommitMethod);
    void ForceSubmit();
    void BndEvt__EditableTextBox_112_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void ExecuteUbergraph_CheatCodes(int32 EntryPoint, OnEditableTextBoxCommittedEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const FText K2Node_ComponentBoundEvent_Text_1, uint8 K2Node_ComponentBoundEvent_CommitMethod, UPlayerController* CallFunc_GetPlayerController_ReturnValue, FText CallFunc_GetText_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, const FText K2Node_CustomEvent_Text, uint8 K2Node_CustomEvent_CommitMethod, const FText K2Node_ComponentBoundEvent_Text, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void Submit__DelegateSignature(FString String);
}

#endif
