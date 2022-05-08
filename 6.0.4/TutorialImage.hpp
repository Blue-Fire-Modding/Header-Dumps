#ifndef UE4SS_SDK_TutorialImage_HPP
#define UE4SS_SDK_TutorialImage_HPP

class UTutorialImage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Button;
    class UTextBlock* Description;
    class UImage* Image_67;

    void Set(FText Command, class UMaterialInterface* Input, class UMaterialInterface* Image, bool NonSquare, bool Empty);
    void ExecuteUbergraph_TutorialImage(int32 EntryPoint);
};

#endif
