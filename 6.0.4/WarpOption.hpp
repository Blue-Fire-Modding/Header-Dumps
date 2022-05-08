#ifndef UE4SS_SDK_WarpOption_HPP
#define UE4SS_SDK_WarpOption_HPP

class UWarpOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    class UImage* Image_83;
    class UTextBlock* TextBlock_1;
    TEnumAsByte<CheckPoints::Type> CheckPoint;
    TEnumAsByte<Areas::Type> Area;
    bool NotActive;

    void SetText(FText InText);
    void Selected();
    void Unselected();
    void PreConstruct(bool IsDesignTime);
    void Undiscovered();
    void Set Checkpoint(TEnumAsByte<CheckPoints::Type> CheckPoint);
    void ExecuteUbergraph_WarpOption(int32 EntryPoint);
};

#endif
