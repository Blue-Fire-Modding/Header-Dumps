#ifndef UE4SS_SDK_NPC_Onop_Popibom_HPP
#define UE4SS_SDK_NPC_Onop_Popibom_HPP

class ANPC_Onop_Popibom_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hair;
    UTalkOnop_AnimBP_C* TalkingAnimBP;

    void NPCDialog();
    void CustomEvent();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void ExecuteUbergraph_NPC_Onop_Popibom(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, float CallFunc_PlayAnimMontage_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
