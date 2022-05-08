#ifndef UE4SS_SDK_Mira_EndQuest_HPP
#define UE4SS_SDK_Mira_EndQuest_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_4(class AMira_EndQuest_Controller_C* Mira_EndQuest_Controller);
    void SequenceEvent__ENTRYPOINTSequenceDirector_3(class AMira_EndQuest_Controller_C* Mira_EndQuest_Controller);
    void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ANPC_Mira_C* NPC_Mira2);
    void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ANPC_Mira_C* NPC_Mira2);
    void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ANPC_Mira_C* NPC_Mira2);
    void Nuos_Temple_Intro_Controller_Event_0(class ANuos_Temple_Intro_Controller_C* Nuos_Temple_Intro_Controller);
    void Nuos_Temple_Intro_Controller_Event_1(class ANuos_Temple_Intro_Controller_C* Nuos_Temple_Intro_Controller);
    void NPC_Mira2_Event_0(class ANPC_Mira_C* NPC_Mira2);
    void Mira_Intro_Controller_Event_0(class AMira_Intro_Controller_C* Mira_Intro_Controller);
    void Mira_Intro_Controller_Event_1(class AMira_Intro_Controller_C* Mira_Intro_Controller);
    void Mira_EndQuest_Controller_Event_0(class AMira_EndQuest_Controller_C* Mira_EndQuest_Controller);
    void Mira_EndQuest_Controller_Event_1(class AMira_EndQuest_Controller_C* Mira_EndQuest_Controller);
    void Mira_EndQuest_Controller_Event_2(class AMira_EndQuest_Controller_C* Mira_EndQuest_Controller);
    void Mira_EndQuest_Controller_Event_3(class AMira_EndQuest_Controller_C* Mira_EndQuest_Controller);
    void NPC_Mira2_Event_1(class ANPC_Mira_C* NPC_Mira2);
    void NPC_Mira2_Event_2(class ANPC_Mira_C* NPC_Mira2);
    void NPC_Mira2_Event_3(class ANPC_Mira_C* NPC_Mira2);
    void NPC_Mira2_Event_4(class ANPC_Mira_C* NPC_Mira2);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
