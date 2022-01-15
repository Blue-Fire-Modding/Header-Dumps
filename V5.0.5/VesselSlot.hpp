#ifndef UE4SS_SDK_VesselSlot_HPP
#define UE4SS_SDK_VesselSlot_HPP

class UVesselSlot_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_74;

    void Full();
    void Empty();
    void ExecuteUbergraph_VesselSlot(int32 EntryPoint);
}

#endif
