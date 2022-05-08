#ifndef UE4SS_SDK_TargetLockHint_HPP
#define UE4SS_SDK_TargetLockHint_HPP

class UTargetLockHint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Loop;
    class UImage* Image_0;

    void Construct();
    void ModifierOn();
    void ModifierOff();
    void Set Visibility(bool Visible);
    void ExecuteUbergraph_TargetLockHint(int32 EntryPoint);
};

#endif
