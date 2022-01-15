#ifndef UE4SS_SDK_VonBetray_Cutscene_UI_HPP
#define UE4SS_SDK_VonBetray_Cutscene_UI_HPP

class UVonBetray_Cutscene_UI_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeIn;
    UWidgetAnimation* ChangeImage;
    UImage* Image_21;
    UImage* Image_106;

    void Construct();
    void NextImage(UTexture2D* Texture);
    void RemoveUI();
    void ExecuteUbergraph_VonBetray_Cutscene_UI(int32 EntryPoint, UTexture2D* K2Node_CustomEvent_Texture, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
}

#endif
