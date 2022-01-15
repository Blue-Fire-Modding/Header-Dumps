#ifndef UE4SS_SDK_NPC_Bremur_HPP
#define UE4SS_SDK_NPC_Bremur_HPP

class ANPC_Bremur_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBremur_AnimationBP_C* AnimBP;
    int32 No Flyer;
    UAkAudioEvent* NewVar_0_0;

    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void CustomEvent();
    void CustomEvent_1();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent_2();
    void NPCDialog();
    void CustomEvent_3();
    void ReceiveBeginPlay();
    void CustomEvent_0();
    void CustomEvent_4();
    void ExecuteUbergraph_NPC_Bremur(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UBremur_AnimationBP_C* K2Node_DynamicCast_AsBremur_Animation_BP, bool K2Node_DynamicCast_bSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array_1, float CallFunc_PlayAnimMontage_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, bool CallFunc_IsRobiValid_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_UseItem_Success, int32 CallFunc_UseItem_CurrentAmount, bool CallFunc_GetAsset_Success, int32 CallFunc_GetAsset_Index, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, UNewItem_C* CallFunc_GetItemHUD_NewItemHud_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, const TArray<FText>& K2Node_MakeArray_Array_6, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, const TArray<FText>& K2Node_MakeArray_Array_7, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, bool CallFunc_RandomBoolWithWeight_ReturnValue);
}

#endif
