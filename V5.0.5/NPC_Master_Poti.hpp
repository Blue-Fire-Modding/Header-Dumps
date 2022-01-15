#ifndef UE4SS_SDK_NPC_Master_Poti_HPP
#define UE4SS_SDK_NPC_Master_Poti_HPP

class ANPC_Master_Poti_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hat;
    UVon_AnimBP_C* AnimBP_0;
    int32 PotiShop;
    UPotiAnimBlueprint_C* PotiAnimBP;

    void NPCDialog();
    void LookAtPlayerEnd();
    void LookAtPlayerBegin();
    void CustomEvent_2();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void FINfin();
    void CustomEvent_3();
    void CustomEvent_4();
    void ReceiveBeginPlay();
    void QuickEnd();
    void CustomEvent_5();
    void ExecuteUbergraph_NPC_Master_Poti(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, bool K2Node_SwitchInteger_CmpSuccess, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<FText>& K2Node_MakeArray_Array_11, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, UPotiAnimBlueprint_C* K2Node_DynamicCast_AsPoti_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue_2);
}

#endif
