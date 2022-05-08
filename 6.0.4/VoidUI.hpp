#ifndef UE4SS_SDK_VoidUI_HPP
#define UE4SS_SDK_VoidUI_HPP

class UVoidUI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fade;
    class UTextBlock* ActionText;
    class UImage* Background;
    class UCanvasPanel* CanvasPanel_0;
    class UTextBlock* Completed;
    class UHorizontalBox* HorizontalBox_0;
    class UHorizontalBox* HorizontalBox_4;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    class UImage* Image_4;
    class UImage* Image_5;
    class UImage* Image_75;
    class UOverlay* Overlay_0;
    class UTextBlock* TextBlock_2;
    class UImage* VoidPreview;

    void SetVoidGateUI(int32 Difficulty, FLinearColor DifficultyColor, bool Done, FText VoidName, class UTexture2D* Texture);
    void FadeOut();
    void Rem();
    void Construct();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_VoidUI(int32 EntryPoint);
};

#endif
