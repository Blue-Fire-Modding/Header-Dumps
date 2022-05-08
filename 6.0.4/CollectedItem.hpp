#ifndef UE4SS_SDK_CollectedItem_HPP
#define UE4SS_SDK_CollectedItem_HPP

class UCollectedItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UTextBlock* Amount;
    class UImage* Background;
    class UTextBlock* Description;
    class UImage* Image_355;
    class UImage* ItemImage;
    class UTextBlock* Text;

    void Play(FText InText, class UMaterialInterface* Material_Image, FText Description, int32 Value);
    void Construct();
    void TempRemove();
    void TempReAdd();
    void ExecuteUbergraph_CollectedItem(int32 EntryPoint);
};

#endif
