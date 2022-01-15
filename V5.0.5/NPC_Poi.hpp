#ifndef UE4SS_SDK_NPC_Poi_HPP
#define UE4SS_SDK_NPC_Poi_HPP

class ANPC_Poi_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPoi_AnimationBP_C* AnimBP;

    void End();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void NPCDialog();
    void ReceiveBeginPlay();
    void CustomEvent_2();
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void CustomEvent_0();
    void CustomEvent_1();
    void ExecuteUbergraph_NPC_Poi(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_PlayAnimMontage_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, const TArray<FText>& K2Node_MakeArray_Array, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UPoi_AnimationBP_C* K2Node_DynamicCast_AsPoi_Animation_BP, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, const TArray<FText>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, int32 CallFunc_PostEventAtLocation_ReturnValue_2);
}

#endif
