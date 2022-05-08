#ifndef UE4SS_SDK_Von_Cinematics_03_HPP
#define UE4SS_SDK_Von_Cinematics_03_HPP

class AVon_Cinematics_03_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Sword1;
    class UStaticMeshComponent* Sword;
    class UVon_Cinematics_AnimBP_C* AnimBP;
    class ALeaveTemple_Controller_C* Cutscene;

    void OnNotifyEnd_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
    void OnNotifyBegin_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
    void OnInterrupted_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
    void OnBlendOut_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
    void OnCompleted_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
    void ReceiveBeginPlay();
    void VonAnim();
    void FinCutscene();
    void ExecuteUbergraph_Von_Cinematics_03(int32 EntryPoint);
};

#endif
