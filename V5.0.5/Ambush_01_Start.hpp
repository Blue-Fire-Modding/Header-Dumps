#ifndef UE4SS_SDK_Ambush_01_Start_HPP
#define UE4SS_SDK_Ambush_01_Start_HPP

class USequenceDirector_C : ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_2(ABP_Enemies_Ambush_C* BP_Enemies_Ambush);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(UDoor_BP_C* Door_BP2);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(UDoor_BP_C* Door_BP);
    void Door_BP_Event_0(UDoor_BP_C* Door_BP);
    void Door_BP2_Event_0(UDoor_BP_C* Door_BP2);
    void BP_Enemies_Ambush_Event_0(ABP_Enemies_Ambush_C* BP_Enemies_Ambush);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, ABP_Enemies_Ambush_C* K2Node_CustomEvent_BP_Enemies_Ambush, UDoor_BP_C* K2Node_CustomEvent_Door_BP, UDoor_BP_C* K2Node_CustomEvent_Door_BP2);
}

#endif
