#ifndef UE4SS_SDK_NPC_Mia_Firefall_HPP
#define UE4SS_SDK_NPC_Mia_Firefall_HPP

class ANPC_Mia_Firefall_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMiaFirefall_AnimBP_C* AnimBP;

    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void NPCDialog();
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void ReceiveBeginPlay();
    void en();
    void Give Reward();
    void CustomEvent_0();
    void ExecuteUbergraph_NPC_Mia_Firefall(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_PlayAnimMontage_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, UMiaFirefall_AnimBP_C* K2Node_DynamicCast_AsMia_Firefall_Anim_BP, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_GetCurrency_Success, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, const TArray<FText>& K2Node_MakeArray_Array_3, UNewItem_C* CallFunc_GetItemHUD_NewItemHud);
}

#endif
