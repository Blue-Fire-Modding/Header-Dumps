#ifndef UE4SS_SDK_NPCBound_Elevator_HPP
#define UE4SS_SDK_NPCBound_Elevator_HPP

class ANPCBound_Elevator_C : public ANPCBound_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<FText> Text;
    FText Name;
    FNPCBound_Elevator_CRead Read;
    void Read();
    bool Item;
    TEnumAsByte<Items::Type> ItemType;
    bool SaveEvent;
    bool Custom Size;
    FVector Box Size;

    void UserConstructionScript();
    void CustomEvent();
    void DialogStartCall();
    void QuickEnd();
    void ExecuteUbergraph_NPCBound_Elevator(int32 EntryPoint);
    void Read__DelegateSignature();
};

#endif
