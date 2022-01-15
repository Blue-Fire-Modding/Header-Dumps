#ifndef UE4SS_SDK_TargetLockHint_HPP
#define UE4SS_SDK_TargetLockHint_HPP

class UTargetLockHint_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Loop;
    UImage* Image_0;

    void Construct();
    void ModifierOn();
    void ModifierOff();
    void Set Visibility(bool Visible);
    void ExecuteUbergraph_TargetLockHint(int32 EntryPoint, bool K2Node_CustomEvent_Visible, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
