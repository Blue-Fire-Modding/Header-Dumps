#ifndef UE4SS_SDK_NPC_Mira_HPP
#define UE4SS_SDK_NPC_Mira_HPP

class ANPC_Mira_C : public ANPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMira_AnimBP_C* AnimBP;

    void OnNotifyEnd_87A054854D5800A74DF7BC8F9586E6E8(FName NotifyName);
    void OnNotifyBegin_87A054854D5800A74DF7BC8F9586E6E8(FName NotifyName);
    void OnInterrupted_87A054854D5800A74DF7BC8F9586E6E8(FName NotifyName);
    void OnBlendOut_87A054854D5800A74DF7BC8F9586E6E8(FName NotifyName);
    void OnCompleted_87A054854D5800A74DF7BC8F9586E6E8(FName NotifyName);
    void OnNotifyEnd_2A3E65754EAFC9D6E44617B286285DF8(FName NotifyName);
    void OnNotifyBegin_2A3E65754EAFC9D6E44617B286285DF8(FName NotifyName);
    void OnInterrupted_2A3E65754EAFC9D6E44617B286285DF8(FName NotifyName);
    void OnBlendOut_2A3E65754EAFC9D6E44617B286285DF8(FName NotifyName);
    void OnCompleted_2A3E65754EAFC9D6E44617B286285DF8(FName NotifyName);
    void OnNotifyEnd_A657281D482A054B7214A5A118085774(FName NotifyName);
    void OnNotifyBegin_A657281D482A054B7214A5A118085774(FName NotifyName);
    void OnInterrupted_A657281D482A054B7214A5A118085774(FName NotifyName);
    void OnBlendOut_A657281D482A054B7214A5A118085774(FName NotifyName);
    void OnCompleted_A657281D482A054B7214A5A118085774(FName NotifyName);
    void NPCDialog();
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void End Dialogue();
    void CustomEvent_0();
    void CustomEvent_1();
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void MiraCutscene();
    void MiraCelebration();
    void MiraIntroCelebration();
    void MiraLookFront();
    void Quest();
    void RemoveHint();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NPC_Mira(int32 EntryPoint);
};

#endif
