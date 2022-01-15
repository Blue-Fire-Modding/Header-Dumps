#ifndef UE4SS_SDK_NPC_Onop_Kin_HPP
#define UE4SS_SDK_NPC_Onop_Kin_HPP

class ANPC_Onop_Kin_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Cap_Kin;
    UStaticMeshComponent* Face;
    UStaticMeshComponent* Scepter;
    UStaticMeshComponent* Crown;
    UKinAnimBlueprint_C* KinAnimBP;

    void NPCDialog();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void fdsassdf();
    void CustomEvent();
    void CustomEvent_2();
    void ExecuteUbergraph_NPC_Onop_Kin(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UKinAnimBlueprint_C* K2Node_DynamicCast_AsKin_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<FText>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FText CallFunc_MakeLiteralText_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_3, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
