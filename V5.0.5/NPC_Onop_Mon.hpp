#ifndef UE4SS_SDK_NPC_Onop_Mon_HPP
#define UE4SS_SDK_NPC_Onop_Mon_HPP

class ANPC_Onop_Mon_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Cigarette;
    UStaticMeshComponent* Hat;
    int32 Money;
    UMonAnimBlueprint_C* MonAnimBP;

    void Happy();
    void Own House();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent();
    void CustomEvent_2();
    void NPCDialog();
    void CustomEvent_0();
    void CustomEvent_3();
    void Talking1();
    void CustomEvent_4();
    void CustomEvent_5();
    void ExecuteUbergraph_NPC_Onop_Mon(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<FText>& K2Node_MakeArray_Array_1, bool K2Node_SwitchInteger_CmpSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, const TArray<FText>& K2Node_MakeArray_Array_4, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, UMonAnimBlueprint_C* K2Node_DynamicCast_AsMon_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, float CallFunc_PlayAnimMontage_ReturnValue, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_UseItem_Success, int32 CallFunc_UseItem_CurrentAmount, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, FVector CallFunc_K2_GetActorLocation_ReturnValue, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, bool CallFunc_HasCurrency_True, const TArray<FText>& K2Node_MakeArray_Array_11, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_12, const TArray<FText>& K2Node_MakeArray_Array_13, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_14, const TArray<FText>& K2Node_MakeArray_Array_15, const TArray<FText>& K2Node_MakeArray_Array_16, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_17, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1);
}

#endif
