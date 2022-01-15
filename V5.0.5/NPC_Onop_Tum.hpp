#ifndef UE4SS_SDK_NPC_Onop_Tum_HPP
#define UE4SS_SDK_NPC_Onop_Tum_HPP

class ANPC_Onop_Tum_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hair;
    UTalkOnop_AnimBP_C* TalkingAnimBP;

    void CustomEvent();
    void NPCDialog();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ExecuteUbergraph_NPC_Onop_Tum(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UTalkOnop_AnimBP_C* K2Node_DynamicCast_AsTalk_Onop_Anim_BP, bool K2Node_DynamicCast_bSuccess, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
