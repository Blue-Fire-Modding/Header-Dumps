#ifndef UE4SS_SDK_AutoSave_HPP
#define UE4SS_SDK_AutoSave_HPP

class UAutoSave_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Appear;
    UImage* Image_0;
    UImage* Image_123;
    UTextBlock* TextBlock_33;

    void Construct();
    void OnAnimationFinished(const UWidgetAnimation* Animation);
    void ExecuteUbergraph_AutoSave(int32 EntryPoint, const UWidgetAnimation* K2Node_Event_Animation, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
}

#endif
