#ifndef UE4SS_SDK_SteamHouseActioner_HPP
#define UE4SS_SDK_SteamHouseActioner_HPP

class ASteamHouseActioner_C : public AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* Ak;
    class UStaticMeshComponent* A06_SteamMachineActivator;
    class UParticleSystemComponent* P_Smoke;
    class UStaticMeshComponent* Cauldron_Lava;
    class UArrowComponent* Arrow_Player;
    float Show_Lava_Lerp_C8924E0B49FEEC2D78E4C89BBD54E40D;
    TEnumAsByte<ETimelineDirection::Type> Show_Lava__Direction_C8924E0B49FEEC2D78E4C89BBD54E40D;
    class UTimelineComponent* Show Lava;
    class ULevelSequence* Sequence;
    class ASteamHouse_Machines_C* SteamHouseController;
    FVector Finish Location;
    class ASteamHouseMachines_Anim_C* Machine;

    void UserConstructionScript();
    void Show Lava__FinishedFunc();
    void Show Lava__UpdateFunc();
    void OnNotifyEnd_266368294BF9E3E51672B0B96E20B27D(FName NotifyName);
    void OnNotifyBegin_266368294BF9E3E51672B0B96E20B27D(FName NotifyName);
    void OnInterrupted_266368294BF9E3E51672B0B96E20B27D(FName NotifyName);
    void OnBlendOut_266368294BF9E3E51672B0B96E20B27D(FName NotifyName);
    void OnCompleted_266368294BF9E3E51672B0B96E20B27D(FName NotifyName);
    void End();
    void end1();
    void AlreadyUsed();
    void PressButton();
    void ReceiveBeginPlay();
    void Cutscene Show Lava();
    void SetTransformPlayer();
    void ExecuteUbergraph_SteamHouseActioner(int32 EntryPoint);
};

#endif
