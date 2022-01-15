#ifndef UE4SS_SDK_Ambush_Well_End_HPP
#define UE4SS_SDK_Ambush_Well_End_HPP

class USequenceDirector_C : ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_2(UChest_Master_Child_C* Chest_A01_Well_Shield);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(UChest_Master_Child_C* Chest_A01_Well_Shield);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(UDoor_BP_C* Door_A02_24);
    void Door_BP_Event_0(UDoor_BP_C* Door_BP);
    void Door_BP2_Event_0(UDoor_BP_C* Door_BP2);
    void BP_Enemies_Ambush_Event_0(ABP_Enemies_Ambush_C* BP_Enemies_Ambush);
    void Door_BP_Event_1(UDoor_BP_C* Door_BP);
    void Door_BP2_Event_1(UDoor_BP_C* Door_BP2);
    void Door_A02_20_Event_0(UDoor_BP_C* Door_A02_20);
    void Door_A02_20_Event_1(UDoor_BP_C* Door_A02_20);
    void Door_A02_21_Event_0(UDoor_HeadQuarters_BP_C* Door_A02_21);
    void Door_A02_24_Event_0(UDoor_BP_C* Door_A02_24);
    void Chest_A01_Well_Shield_Event_0(UChest_Master_Child_C* Chest_A01_Well_Shield, bool Show VFX);
    void Chest_A01_Well_Shield_Event_1(UChest_Master_Child_C* Chest_A01_Well_Shield, bool Show VFX);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, UChest_Master_Child_C* K2Node_CustomEvent_Chest_A01_Well_Shield, bool K2Node_CustomEvent_Show_VFX, UDoor_BP_C* K2Node_CustomEvent_Door_BP_1, UDoor_BP_C* K2Node_CustomEvent_Door_BP2_1, ABP_Enemies_Ambush_C* K2Node_CustomEvent_BP_Enemies_Ambush, UDoor_BP_C* K2Node_CustomEvent_Door_BP, UDoor_BP_C* K2Node_CustomEvent_Door_BP2, UDoor_BP_C* K2Node_CustomEvent_Door_A02_20_1, UDoor_BP_C* K2Node_CustomEvent_Door_A02_20, UDoor_HeadQuarters_BP_C* K2Node_CustomEvent_Door_A02_21, UDoor_BP_C* K2Node_CustomEvent_Door_A02_24, UChest_Master_Child_C* K2Node_CustomEvent_Chest_A01_Well_Shield_1, bool K2Node_CustomEvent_Show_VFX_1);
}

#endif
