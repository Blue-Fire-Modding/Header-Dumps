#ifndef UE4SS_SDK_StoneheartIntro_HPP
#define UE4SS_SDK_StoneheartIntro_HPP

class USequenceDirector_C : ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void SequenceEvent__ENTRYPOINTSequenceDirector_0(UCinematic_Area_Intro_C* Cinematic_Area_Intro);
    void Cinematic_Area_Intro_Arcane_Event_0(UCinematic_Area_Intro_C* Cinematic_Area_Intro_Arcane);
    void Cinematic_Area_Intro_Arcane_Event_1(UCinematic_Area_Intro_C* Cinematic_Area_Intro_Arcane);
    void Cinematic_Area_Intro_Event_0(UCinematic_Area_Intro_C* Cinematic_Area_Intro);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, UCinematic_Area_Intro_C* K2Node_CustomEvent_Cinematic_Area_Intro, UCinematic_Area_Intro_C* K2Node_CustomEvent_Cinematic_Area_Intro_Arcane_1, UCinematic_Area_Intro_C* K2Node_CustomEvent_Cinematic_Area_Intro_Arcane);
}

#endif
