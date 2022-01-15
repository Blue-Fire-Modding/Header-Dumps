#ifndef UE4SS_SDK_Ambush_01_End_HPP
#define UE4SS_SDK_Ambush_01_End_HPP

class USequenceDirector_C : ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_2(UChest_Master_C* Chest_A01_Nuos_Key_01);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(UDoor_BP_C* Door_BP2);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(UDoor_BP_C* Door_BP);
    void Door_BP_Event_0(UDoor_BP_C* Door_BP);
    void Door_BP2_Event_0(UDoor_BP_C* Door_BP2);
    void BP_Enemies_Ambush_Event_0(ABP_Enemies_Ambush_C* BP_Enemies_Ambush);
    void Door_BP_Event_1(UDoor_BP_C* Door_BP);
    void Door_BP2_Event_1(UDoor_BP_C* Door_BP2);
    void Chest_A01_Nuos_Key_01_Event_0(UChest_Master_C* Chest_A01_Nuos_Key_01, bool Show VFX);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, UChest_Master_C* K2Node_CustomEvent_Chest_A01_Nuos_Key_01, bool K2Node_CustomEvent_Show_VFX, UDoor_BP_C* K2Node_CustomEvent_Door_BP_1, UDoor_BP_C* K2Node_CustomEvent_Door_BP2_1, ABP_Enemies_Ambush_C* K2Node_CustomEvent_BP_Enemies_Ambush, UDoor_BP_C* K2Node_CustomEvent_Door_BP, UDoor_BP_C* K2Node_CustomEvent_Door_BP2);
}

#endif
