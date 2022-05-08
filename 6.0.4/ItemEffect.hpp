#ifndef UE4SS_SDK_ItemEffect_HPP
#define UE4SS_SDK_ItemEffect_HPP

class UItemEffect_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    class UImage* Image_1;
    class USizeBox* SizeBox_0;
    class UTextBlock* TextBlock_1;
    bool HideImage;

    void Set(int32 Number, class UTexture2D* Texture);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ItemEffect(int32 EntryPoint);
};

#endif
