#ifndef UE4SS_SDK_NPC_Onop_Walking_HPP
#define UE4SS_SDK_NPC_Onop_Walking_HPP

class ANPC_Onop_Walking_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hair;

    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ExecuteUbergraph_NPC_Onop_Walking(int32 EntryPoint, int32 CallFunc_PostEventAtLocation_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UOnopDancing_AnimBP_C* K2Node_DynamicCast_AsOnop_Dancing_Anim_BP, bool K2Node_DynamicCast_bSuccess);
}

#endif
