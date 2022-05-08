#ifndef UE4SS_SDK_SteamHouseMachines_Anim_HPP
#define UE4SS_SDK_SteamHouseMachines_Anim_HPP

class ASteamHouseMachines_Anim_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class AActor* Smoke;

    void Activate();
    void ExecuteUbergraph_SteamHouseMachines_Anim(int32 EntryPoint);
};

#endif
