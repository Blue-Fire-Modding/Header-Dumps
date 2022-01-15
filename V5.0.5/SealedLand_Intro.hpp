#ifndef UE4SS_SDK_SealedLand_Intro_HPP
#define UE4SS_SDK_SealedLand_Intro_HPP

class USequenceDirector_C : ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_4(UBP_SealedLandExit_C* BP_SealedLandExit);
    void SequenceEvent__ENTRYPOINTSequenceDirector_3(ABP_Lighting_C* BP_Lighting);
    void SequenceEvent__ENTRYPOINTSequenceDirector_2(ABP_Lighting_C* BP_Lighting);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(ABP_Lighting_C* BP_Lighting);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(ABP_Lighting_C* BP_Lighting);
    void BP_Lighting_Event_0(ABP_Lighting_C* BP_Lighting);
    void BP_SealedLandExit_Event_0(UBP_SealedLandExit_C* BP_SealedLandExit);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, UBP_SealedLandExit_C* K2Node_CustomEvent_BP_SealedLandExit, ABP_Lighting_C* K2Node_CustomEvent_BP_Lighting);
}

#endif
