#ifndef UE4SS_SDK_LordsDoorBreak_HPP
#define UE4SS_SDK_LordsDoorBreak_HPP

class USequenceDirector_C : ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_1(ULordsDoorBreak_Controller_C* LordsDoorBreak_Controller);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(AFire_Door_C* Fire_Door);
    void Nuos_Intro_Controller_Event_0(UNuos_Intro_Controller_C* Nuos_Intro_Controller);
    void Nuos_Intro_Controller_Event_1(UNuos_Intro_Controller_C* Nuos_Intro_Controller);
    void Nuos_Intro_Controller_Event_2(UNuos_Intro_Controller_C* Nuos_Intro_Controller);
    void Nuos_Temple_Intro_Controller_Event_0(UNuos_Temple_Intro_Controller_C* Nuos_Temple_Intro_Controller);
    void Nuos_Temple_Intro_Controller_Event_1(UNuos_Temple_Intro_Controller_C* Nuos_Temple_Intro_Controller);
    void Fire_Door_Event_0(AFire_Door_C* Fire_Door);
    void LordsDoorBreak_Controller_Event_0(ULordsDoorBreak_Controller_C* LordsDoorBreak_Controller);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, ULordsDoorBreak_Controller_C* K2Node_CustomEvent_LordsDoorBreak_Controller, UNuos_Intro_Controller_C* K2Node_CustomEvent_Nuos_Intro_Controller_2, UNuos_Intro_Controller_C* K2Node_CustomEvent_Nuos_Intro_Controller_1, UNuos_Intro_Controller_C* K2Node_CustomEvent_Nuos_Intro_Controller, UNuos_Temple_Intro_Controller_C* K2Node_CustomEvent_Nuos_Temple_Intro_Controller_1, UNuos_Temple_Intro_Controller_C* K2Node_CustomEvent_Nuos_Temple_Intro_Controller, AFire_Door_C* K2Node_CustomEvent_Fire_Door);
}

#endif