#ifndef UE4SS_SDK_GameIntro_HPP
#define UE4SS_SDK_GameIntro_HPP

class UGameIntro_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Intro_Stadia;
    UWidgetAnimation* Intro;
    UImage* BlackBackground;
    UTextBlock* Disclaimer;
    UImage* Grafitti;
    UImage* Image_282;
    UImage* Robi;
    UTextBlock* SaveMessage;
    UImage* WarningBackground;
    UCanvasPanel* WarningCanvas;
    FGameIntro_CFinish Finish;
    void Finish();

    void Start();
    void Construct();
    void OnAnimationFinished(const UWidgetAnimation* Animation);
    void Set Save Message(uint8 Platform, uint8 Region);
    void ExecuteUbergraph_GameIntro(int32 EntryPoint, FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, uint8 Temp_byte_Variable, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const UWidgetAnimation* K2Node_Event_Animation, uint8 K2Node_CustomEvent_Platform, uint8 K2Node_CustomEvent_Region, FText CallFunc_MakeLiteralText_ReturnValue_1, UGameInstance* CallFunc_GetGameInstance_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_2, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, FText K2Node_Select_Default, UWidget* K2Node_Select_Default_1);
    void Finish__DelegateSignature();
}

#endif
