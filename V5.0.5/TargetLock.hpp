#ifndef UE4SS_SDK_TargetLock_HPP
#define UE4SS_SDK_TargetLock_HPP

class UTargetLock_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Lock;
    UWidgetAnimation* Loop;
    UImage* Backup;

    void Stop();
    void ModifierOn();
    void ModifierOff();
    void Set Visibility(bool Visible);
    void LockEv();
    void CheckDash(bool Index);
    void ExecuteUbergraph_TargetLock(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_CustomEvent_Visible, ESlateVisibility K2Node_Select_Default, bool K2Node_CustomEvent_Index);
}

#endif
