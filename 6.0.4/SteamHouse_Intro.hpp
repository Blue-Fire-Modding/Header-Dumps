#ifndef UE4SS_SDK_SteamHouse_Intro_HPP
#define UE4SS_SDK_SteamHouse_Intro_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Cinematic_Area_Intro_Arcane_Event_0(class ACinematic_Area_Intro_C* Cinematic_Area_Intro_Arcane);
    void Cinematic_Area_Intro_Arcane_Event_1(class ACinematic_Area_Intro_C* Cinematic_Area_Intro_Arcane);
    void Cinematic_Area_Intro_Event_0(class ACinematic_Area_Intro_C* Cinematic_Area_Intro);
    void Cinematic_Area_Intro3_Event_0(class ACinematic_Area_Intro_C* Cinematic_Area_Intro3);
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

#endif
