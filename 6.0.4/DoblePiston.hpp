#ifndef UE4SS_SDK_DoblePiston_HPP
#define UE4SS_SDK_DoblePiston_HPP

class ADoblePiston_C : public ASteamHouseMachines_Anim_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* AkLoop;
    class UAkComponent* Ak;
    class UStaticMeshComponent* pistin ;
    class UStaticMeshComponent* pistin U;
    class UStaticMeshComponent* Wheel;
    class UStaticMeshComponent* Wheel U;
    class UStaticMeshComponent* Piston;
    class UStaticMeshComponent* Piston U;
    class USkeletalMeshComponent* Animations;
    class UStaticMeshComponent* BaseMachine;

    void ReceiveBeginPlay();
    void Activate();
    void ExecuteUbergraph_DoblePiston(int32 EntryPoint);
};

#endif
