#ifndef UE4SS_SDK_SettingsText_HPP
#define UE4SS_SDK_SettingsText_HPP

class USettingsText_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* UnselectAnim;
    UTextBlock* Text;
    FText Box;
    int32 Size;
    bool Select;
    bool Deactivated;

    void PreConstruct(bool IsDesignTime);
    void SelectEv();
    void Unselect();
    void ExecuteUbergraph_SettingsText(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
