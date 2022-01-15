#ifndef UE4SS_SDK_NPC_Master_Onari_HPP
#define UE4SS_SDK_NPC_Master_Onari_HPP

class ANPC_Master_Onari_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UOnariAnimBlueprint_C* OnariAnimBP;

    void CustomEvent_3();
    void CustomEvent_4();
    void Talking1();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void Buy();
    void CustomEvent_2();
    void CustomEvent_5();
    void CustomEvent_7();
    void CustomEvent_8();
    void CustomEvent();
    void NPCDialog();
    void ExecuteUbergraph_NPC_Master_Onari(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, bool CallFunc_HasCurrency_True, bool CallFunc_GetAsset_Success, int32 CallFunc_GetAsset_Index, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UOnariAnimBlueprint_C* K2Node_DynamicCast_AsOnari_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, bool K2Node_SwitchInteger_CmpSuccess, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_12, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_13, const TArray<FText>& K2Node_MakeArray_Array_14, bool K2Node_SwitchInteger_CmpSuccess_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_15, const TArray<FText>& K2Node_MakeArray_Array_16, bool CallFunc_HasCurrency_True_1, const TArray<FText>& K2Node_MakeArray_Array_17, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, int32 CallFunc_PostEventAtLocation_ReturnValue, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3);
}

#endif
