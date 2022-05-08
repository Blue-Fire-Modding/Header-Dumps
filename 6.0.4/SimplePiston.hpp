#ifndef UE4SS_SDK_SimplePiston_HPP
#define UE4SS_SDK_SimplePiston_HPP

class ASimplePiston_C : public ASteamHouseMachines_Anim_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* Ak;
    class UAkComponent* AkLoop;
    class UStaticMeshComponent* Cube;
    class UStaticMeshComponent* Piston;
    class UStaticMeshComponent* Gear;
    class UStaticMeshComponent* GA;
    class UStaticMeshComponent* GB;
    class UStaticMeshComponent* GC;
    class USkeletalMeshComponent* Animations;
    class UStaticMeshComponent* Base;

    void ReceiveBeginPlay();
    void Activate();
    void ExecuteUbergraph_SimplePiston(int32 EntryPoint);
};

#endif
