#ifndef UE4SS_SDK_Waterways_SanctuaryActivation_HPP
#define UE4SS_SDK_Waterways_SanctuaryActivation_HPP

class USequenceDirector_C : ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_5(UChest_Master_C* Chest_A02_Tunic_PureShadow);
    void SequenceEvent__ENTRYPOINTSequenceDirector_4(UDoor_BP_C* Door_A02_WaterWays_Boss);
    void SequenceEvent__ENTRYPOINTSequenceDirector_3(ABP_SanctuaryBase_WaterWays_C* BP_SanctuaryBase4);
    void SequenceEvent__ENTRYPOINTSequenceDirector_2(ABP_SanctuaryBase_WaterWays_C* BP_SanctuaryBase3);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(ABP_SanctuaryBase_WaterWays_C* BP_SanctuaryBase2);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(ABP_SanctuaryBase_WaterWays_C* BP_SanctuaryBase);
    void BP_SanctuaryBase_Event_0(ABP_SanctuaryBase_WaterWays_C* BP_SanctuaryBase);
    void BP_SanctuaryBase2_Event_0(ABP_SanctuaryBase_WaterWays_C* BP_SanctuaryBase2);
    void BP_SanctuaryBase3_Event_0(ABP_SanctuaryBase_WaterWays_C* BP_SanctuaryBase3);
    void BP_SanctuaryBase4_Event_0(ABP_SanctuaryBase_WaterWays_C* BP_SanctuaryBase4);
    void Door_A02_WaterWays_Boss_Event_0(UDoor_BP_C* Door_A02_WaterWays_Boss, bool ExternalControl, bool BeginPlay, bool ChangeCamera);
    void Door_A02_WaterWays_Boss_Event_1(UDoor_BP_C* Door_A02_WaterWays_Boss, bool DontWriteID);
    void Chest_A02_Tunic_PureShadow_Event_0(UChest_Master_C* Chest_A02_Tunic_PureShadow, bool Show VFX);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, UChest_Master_C* K2Node_CustomEvent_Chest_A02_Tunic_PureShadow, bool K2Node_CustomEvent_Show_VFX, ABP_SanctuaryBase_WaterWays_C* K2Node_CustomEvent_BP_SanctuaryBase, ABP_SanctuaryBase_WaterWays_C* K2Node_CustomEvent_BP_SanctuaryBase2, ABP_SanctuaryBase_WaterWays_C* K2Node_CustomEvent_BP_SanctuaryBase3, ABP_SanctuaryBase_WaterWays_C* K2Node_CustomEvent_BP_SanctuaryBase4, UDoor_BP_C* K2Node_CustomEvent_Door_A02_WaterWays_Boss_1, bool K2Node_CustomEvent_ExternalControl, bool K2Node_CustomEvent_BeginPlay, bool K2Node_CustomEvent_ChangeCamera, UDoor_BP_C* K2Node_CustomEvent_Door_A02_WaterWays_Boss, bool K2Node_CustomEvent_DontWriteID);
}

#endif
