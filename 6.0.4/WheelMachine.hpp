#ifndef UE4SS_SDK_WheelMachine_HPP
#define UE4SS_SDK_WheelMachine_HPP

class AWheelMachine_C : public ASteamHouseMachines_Anim_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* AkLoop;
    class UAkComponent* Ak;
    class UStaticMeshComponent* Spout;
    class UStaticMeshComponent* Gear1;
    class UStaticMeshComponent* Gear;
    class UStaticMeshComponent* Wheel;
    class USkeletalMeshComponent* Animations;
    class UStaticMeshComponent* Base;

    void ReceiveBeginPlay();
    void Activate();
    void ExecuteUbergraph_WheelMachine(int32 EntryPoint);
};

#endif
