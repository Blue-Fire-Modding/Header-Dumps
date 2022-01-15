#ifndef UE4SS_SDK_NPC_Onop_Nuno_HPP
#define UE4SS_SDK_NPC_Onop_Nuno_HPP

class ANPC_Onop_Nuno_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hair;
    UOpiAnimBlueprint_C* OpiAnimBP;

    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent();
    void NPCDialog();
    void CustomEvent_2();
    void CustomEvent_3();
    void ReceiveBeginPlay();
    void CustomEvent_5();
    void CustomEvent_4();
    void updatepop();
    void ExecuteUbergraph_NPC_Onop_Nuno(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, UOpiAnimBlueprint_C* K2Node_DynamicCast_AsOpi_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, bool CallFunc_UseItem_Success, int32 CallFunc_UseItem_CurrentAmount, const TArray<FText>& K2Node_MakeArray_Array_4, bool K2Node_SwitchInteger_CmpSuccess, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, bool CallFunc_GetCurrency_Success, const TArray<FText>& K2Node_MakeArray_Array_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_10, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, const TArray<FText>& K2Node_MakeArray_Array_12, const TArray<FText>& K2Node_MakeArray_Array_13, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
