#ifndef UE4SS_SDK_SteamHouseMachines_Anim_HPP
#define UE4SS_SDK_SteamHouseMachines_Anim_HPP

class ASteamHouseMachines_Anim_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    AActor* Smoke;

    void Activate();
    void ExecuteUbergraph_SteamHouseMachines_Anim(int32 EntryPoint);
}

#endif
