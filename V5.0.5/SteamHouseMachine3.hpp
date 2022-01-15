#ifndef UE4SS_SDK_SteamHouseMachine3_HPP
#define UE4SS_SDK_SteamHouseMachine3_HPP

class USequenceDirector_C : ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_0(USteamHouseActioner_C* SteamMachineActivator_3);
    void Nuos_Temple_Intro_Controller_Event_0(UNuos_Temple_Intro_Controller_C* Nuos_Temple_Intro_Controller);
    void Nuos_Temple_Intro_Controller_Event_1(UNuos_Temple_Intro_Controller_C* Nuos_Temple_Intro_Controller);
    void NPC_Mira2_Event_0(UNPC_Mira_C* NPC_Mira2);
    void Mira_Intro_Controller_Event_0(UMira_Intro_Controller_C* Mira_Intro_Controller);
    void Mira_Intro_Controller_Event_1(UMira_Intro_Controller_C* Mira_Intro_Controller);
    void Mira_EndQuest_Controller_Event_0(UMira_EndQuest_Controller_C* Mira_EndQuest_Controller);
    void Mira_EndQuest_Controller_Event_1(UMira_EndQuest_Controller_C* Mira_EndQuest_Controller);
    void SteamMachineActivator_3_Event_0(USteamHouseActioner_C* SteamMachineActivator_3);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, USteamHouseActioner_C* K2Node_CustomEvent_SteamMachineActivator_3, UNuos_Temple_Intro_Controller_C* K2Node_CustomEvent_Nuos_Temple_Intro_Controller_1, UNuos_Temple_Intro_Controller_C* K2Node_CustomEvent_Nuos_Temple_Intro_Controller, UNPC_Mira_C* K2Node_CustomEvent_NPC_Mira2, UMira_Intro_Controller_C* K2Node_CustomEvent_Mira_Intro_Controller_1, UMira_Intro_Controller_C* K2Node_CustomEvent_Mira_Intro_Controller, UMira_EndQuest_Controller_C* K2Node_CustomEvent_Mira_EndQuest_Controller_1, UMira_EndQuest_Controller_C* K2Node_CustomEvent_Mira_EndQuest_Controller);
}

#endif
