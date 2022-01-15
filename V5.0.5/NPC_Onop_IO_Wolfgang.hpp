#ifndef UE4SS_SDK_NPC_Onop_IO_Wolfgang_HPP
#define UE4SS_SDK_NPC_Onop_IO_Wolfgang_HPP

class ANPC_Onop_IO_Wolfgang_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hair;
    UParticleSystemComponent* P_MusicalNotes;
    UStaticMeshComponent* Flute;
    UBechAnimBlueprint_C* AnimBPBech;

    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent();
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void CustomEvent_2();
    void ReceiveBeginPlay();
    void CustomEvent_3();
    void CustomEvent_4();
    void CustomEvent_5();
    void CustomEvent_0();
    void NPCDialog();
    void ExecuteUbergraph_NPC_Onop_IO_Wolfgang(int32 EntryPoint, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, bool CallFunc_GetCurrency_Success, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<FText>& K2Node_MakeArray_Array_11, bool CallFunc_UseItem_Success, int32 CallFunc_UseItem_CurrentAmount, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UBechAnimBlueprint_C* K2Node_DynamicCast_AsBech_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
}

#endif
