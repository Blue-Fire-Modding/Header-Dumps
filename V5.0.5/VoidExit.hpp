#ifndef UE4SS_SDK_VoidExit_HPP
#define UE4SS_SDK_VoidExit_HPP

class UVoidExit_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Fade_Icon;
    UWidgetAnimation* Fade_Background;
    UImage* Background;
    UImage* Image_41;
    bool AddLife;
    float Delay;

    void Construct();
    void Loaded();
    void End();
    void Start();
    void ExecuteUbergraph_VoidExit(int32 EntryPoint, bool Temp_bool_Variable, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, float CallFunc_MakeLiteralFloat_ReturnValue, float K2Node_Select_Default);
}

#endif
