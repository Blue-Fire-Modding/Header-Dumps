#ifndef UE4SS_SDK_NPC_TunicMaker_HPP
#define UE4SS_SDK_NPC_TunicMaker_HPP

class ANPC_TunicMaker_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAri_SkelMesh_Skeleton_AnimBlueprint_C* AnimBP;

    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void 22();
    void CustomEvent();
    void CustomEvent_0();
    void CustomEvent_2();
    void NPCDialog();
    void CustomEvent_3();
    void CustomEvent_4();
    void CustomEvent_5();
    void CustomEvent_6();
    void CustomEvent_7();
    void CustomEvent_8();
    void CustomEvent_9();
    void CustomEvent_10();
    void CustomEvent_11();
    void CustomEvent_12();
    void ReceiveBeginPlay();
    void CustomEvent_13();
    void ExecuteUbergraph_NPC_TunicMaker(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAri_SkelMesh_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsAri_Skel_Mesh_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, bool K2Node_SwitchInteger_CmpSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<FText>& K2Node_MakeArray_Array_11, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_12, const TArray<FText>& K2Node_MakeArray_Array_13, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_14, const TArray<FText>& K2Node_MakeArray_Array_15, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_16, const TArray<FText>& K2Node_MakeArray_Array_17, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_18, const TArray<FText>& K2Node_MakeArray_Array_19, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_20, const TArray<FText>& K2Node_MakeArray_Array_21, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_22, const TArray<FText>& K2Node_MakeArray_Array_23, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_24, const TArray<FText>& K2Node_MakeArray_Array_25, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_26, const TArray<FText>& K2Node_MakeArray_Array_27, const TArray<FText>& K2Node_MakeArray_Array_28, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, const TArray<FText>& K2Node_MakeArray_Array_29, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_30, const TArray<FText>& K2Node_MakeArray_Array_31, bool CallFunc_RandomBoolWithWeight_ReturnValue);
}

#endif
