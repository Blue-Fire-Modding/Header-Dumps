#ifndef UE4SS_SDK_NPC_Onop_IO_Bitoven_HPP
#define UE4SS_SDK_NPC_Onop_IO_Bitoven_HPP

class ANPC_Onop_IO_Bitoven_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hair_08;
    UStaticMeshComponent* Flute;
    UStaticMeshComponent* StaticMesh;
    UBetovenAnimBlueprint_C* AnimBitoven;

    void CustomEvent();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void CustomEvent_2();
    void ReceiveBeginPlay();
    void CustomEvent_3();
    void CustomEvent_4();
    void CustomEvent_5();
    void CustomEvent_0();
    void NPCDialog();
    void ExecuteUbergraph_NPC_Onop_IO_Bitoven(int32 EntryPoint, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, float CallFunc_PlayAnimMontage_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, const TArray<FText>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_10, bool CallFunc_GetCurrency_Success, const TArray<FText>& K2Node_MakeArray_Array_11, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, bool CallFunc_UseItem_Success, int32 CallFunc_UseItem_CurrentAmount, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UBetovenAnimBlueprint_C* K2Node_DynamicCast_AsBetoven_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
}

#endif
