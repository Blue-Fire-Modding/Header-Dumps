#ifndef UE4SS_SDK_NPC_Merchant_HPP
#define UE4SS_SDK_NPC_Merchant_HPP

class ANPC_Merchant_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Book;
    UMerchant_AnimBP_C* AnimBPmork;
    int32 ShopMork;
    bool MorkTunic;
    TArray<APickup_C*> Books;

    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void End();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent();
    void CustomEvent_4();
    void CustomEvent_5();
    void NPCDialog();
    void ReceiveBeginPlay();
    void CustomEvent_6();
    void FINfin();
    void CustomEvent_2();
    void CustomEvent_1();
    void CustomEvent_3();
    void Show Quest();
    void Books Challenge();
    void Back to Main();
    void Check Quest Mork();
    void Show Books();
    void ExecuteUbergraph_NPC_Merchant(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UMerchant_AnimBP_C* K2Node_DynamicCast_AsMerchant_Anim_BP, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, float CallFunc_PlayAnimMontage_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, const TArray<FText>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, bool CallFunc_UseItem_Success, int32 CallFunc_UseItem_CurrentAmount, bool CallFunc_GetAsset_Success, int32 CallFunc_GetAsset_Index, int32 Temp_int_Loop_Counter_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, const TArray<FText>& K2Node_MakeArray_Array_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_10, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, const TArray<FText>& K2Node_MakeArray_Array_11, const TArray<FText>& K2Node_MakeArray_Array_12, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_13, const TArray<FText>& K2Node_MakeArray_Array_14, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_15, bool K2Node_SwitchInteger_CmpSuccess, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, bool K2Node_SwitchInteger_CmpSuccess_1, int32 Temp_int_Array_Index_Variable, APickup_C* CallFunc_Array_Get_Item, bool CallFunc_IsRobiValid_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_16, const TArray<FText>& K2Node_MakeArray_Array_17, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_18, bool CallFunc_UseItem_Success_1, int32 CallFunc_UseItem_CurrentAmount_1, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, const TArray<FText>& K2Node_MakeArray_Array_19, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_20, const TArray<FText>& K2Node_Select_Default, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, bool CallFunc_RandomBoolWithWeight_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
}

#endif
