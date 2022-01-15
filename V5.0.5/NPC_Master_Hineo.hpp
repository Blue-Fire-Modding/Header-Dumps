#ifndef UE4SS_SDK_NPC_Master_Hineo_HPP
#define UE4SS_SDK_NPC_Master_Hineo_HPP

class ANPC_Master_Hineo_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Glasses;
    UVon_AnimBP_C* AnimBP_0;
    UHineoAnimBlueprint_C* HineoAnimBP;

    void CustomEvent_1();
    void CustomEvent();
    void NPCDialog();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ExecuteUbergraph_NPC_Master_Hineo(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, UHineoAnimBlueprint_C* K2Node_DynamicCast_AsHineo_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
