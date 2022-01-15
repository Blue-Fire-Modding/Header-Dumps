#ifndef UE4SS_SDK_Ambush_07_Start_HPP
#define UE4SS_SDK_Ambush_07_Start_HPP

class USequenceDirector_C : ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_1(ABP_Enemies_Ambush_C* BP_Enemies_Ambush_4);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(UDoor_BP_C* Door_A01_01);
    void Door_BP_Event_0(UDoor_BP_C* Door_BP);
    void Door_BP2_Event_0(UDoor_BP_C* Door_BP2);
    void BP_Enemies_Ambush_Event_0(ABP_Enemies_Ambush_C* BP_Enemies_Ambush);
    void Door_A01_18_Event_0(UDoor_BP_C* Door_A01_18);
    void Door_BP4_Event_0(UDoor_BP_C* Door_BP4);
    void BP_Enemies_Ambush_03_Event_0(ABP_Enemies_Ambush_C* BP_Enemies_Ambush_03);
    void BP_Enemies_Ambush_4_Event_0(ABP_Enemies_Ambush_C* BP_Enemies_Ambush_4);
    void Door_A01_01_Event_0(UDoor_BP_C* Door_A01_01);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, UDoor_BP_C* K2Node_CustomEvent_Door_A01_01, UDoor_BP_C* K2Node_CustomEvent_Door_BP, UDoor_BP_C* K2Node_CustomEvent_Door_BP2, ABP_Enemies_Ambush_C* K2Node_CustomEvent_BP_Enemies_Ambush, UDoor_BP_C* K2Node_CustomEvent_Door_A01_18, UDoor_BP_C* K2Node_CustomEvent_Door_BP4, ABP_Enemies_Ambush_C* K2Node_CustomEvent_BP_Enemies_Ambush_03, ABP_Enemies_Ambush_C* K2Node_CustomEvent_BP_Enemies_Ambush_4);
}

#endif
