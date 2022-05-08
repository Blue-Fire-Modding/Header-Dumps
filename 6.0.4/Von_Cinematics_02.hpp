#ifndef UE4SS_SDK_Von_Cinematics_02_HPP
#define UE4SS_SDK_Von_Cinematics_02_HPP

class AVon_Cinematics_02_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDecalComponent* Decal;
    class UStaticMeshComponent* Sword1;
    class UStaticMeshComponent* Sword;
    class UVon_Cinematics_AnimBP_C* AnimBP;
    class ALeaveTemple_Controller_C* Cutscene;

    void OnNotifyEnd_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
    void OnNotifyBegin_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
    void OnInterrupted_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
    void OnBlendOut_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
    void OnCompleted_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
    void OnNotifyEnd_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
    void OnNotifyBegin_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
    void OnInterrupted_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
    void OnBlendOut_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
    void OnCompleted_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
    void ReceiveBeginPlay();
    void VonAnim();
    void FinCutscene();
    void VonGiveSanctuary();
    void ExecuteUbergraph_Von_Cinematics_02(int32 EntryPoint);
};

#endif
