#ifndef UE4SS_SDK_AmuletSlot_HPP
#define UE4SS_SDK_AmuletSlot_HPP

class UAmuletSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    bool Used;
    TEnumAsByte<Spirits::Type> Amulet;

    void Construct();
    void ExecuteUbergraph_AmuletSlot(int32 EntryPoint);
};

#endif
