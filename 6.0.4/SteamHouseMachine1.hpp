#ifndef UE4SS_SDK_SteamHouseMachine1_HPP
#define UE4SS_SDK_SteamHouseMachine1_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ASteamHouseActioner_C* SteamMachineActivator_1);
    void Nuos_Temple_Intro_Controller_Event_0(class ANuos_Temple_Intro_Controller_C* Nuos_Temple_Intro_Controller);
    void Nuos_Temple_Intro_Controller_Event_1(class ANuos_Temple_Intro_Controller_C* Nuos_Temple_Intro_Controller);
    void NPC_Mira2_Event_0(class ANPC_Mira_C* NPC_Mira2);
    void Mira_Intro_Controller_Event_0(class AMira_Intro_Controller_C* Mira_Intro_Controller);
    void Mira_Intro_Controller_Event_1(class AMira_Intro_Controller_C* Mira_Intro_Controller);
    void Mira_EndQuest_Controller_Event_0(class AMira_EndQuest_Controller_C* Mira_EndQuest_Controller);
    void Mira_EndQuest_Controller_Event_1(class AMira_EndQuest_Controller_C* Mira_EndQuest_Controller);
    void SteamMachineActivator_1_Event_0(class ASteamHouseActioner_C* SteamMachineActivator_1);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
