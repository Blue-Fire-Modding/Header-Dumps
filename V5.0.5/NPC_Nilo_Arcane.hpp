#ifndef UE4SS_SDK_NPC_Nilo_Arcane_HPP
#define UE4SS_SDK_NPC_Nilo_Arcane_HPP

class ANPC_Nilo_Arcane_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNilo_Arcane_AnimationBP_C* AnimBP;
    bool SpeakFirstTimeLocal;

    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void NPCDialog();
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void CustomEvent_0();
    void ReceiveBeginPlay();
    void CustomEvent_2();
    void FINfin();
    void CustomEvent_9();
    void CustomEvent_10();
    void CustomEvent_11();
    void ExecuteUbergraph_NPC_Nilo_Arcane(int32 EntryPoint, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_PlayAnimMontage_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UNilo_Arcane_AnimationBP_C* K2Node_DynamicCast_AsNilo_Arcane_Animation_BP, bool K2Node_DynamicCast_bSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, bool CallFunc_IsRobiValid_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_8, bool K2Node_SwitchInteger_CmpSuccess, const TArray<FText>& K2Node_MakeArray_Array_9, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_10, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, const TArray<FText>& K2Node_MakeArray_Array_12, const TArray<FText>& K2Node_MakeArray_Array_13, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool CallFunc_RandomBoolWithWeight_ReturnValue);
}

#endif
