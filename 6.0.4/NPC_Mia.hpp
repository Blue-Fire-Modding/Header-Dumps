#ifndef UE4SS_SDK_NPC_Mia_HPP
#define UE4SS_SDK_NPC_Mia_HPP

class ANPC_Mia_C : public ANPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Sword2;
    class UStaticMeshComponent* Sword;
    class UMia_AnimBP_C* AnimBP;

    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void NPCDialog();
    void MoveGear();
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void en();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NPC_Mia(int32 EntryPoint);
};

#endif
