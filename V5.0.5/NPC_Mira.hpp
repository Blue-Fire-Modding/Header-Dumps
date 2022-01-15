#ifndef UE4SS_SDK_NPC_Mira_HPP
#define UE4SS_SDK_NPC_Mira_HPP

class ANPC_Mira_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMira_AnimBP_C* AnimBP;

    void OnNotifyEnd_87A054854D5800A74DF7BC8F9586E6E8(FName NotifyName);
    void OnNotifyBegin_87A054854D5800A74DF7BC8F9586E6E8(FName NotifyName);
    void OnInterrupted_87A054854D5800A74DF7BC8F9586E6E8(FName NotifyName);
    void OnBlendOut_87A054854D5800A74DF7BC8F9586E6E8(FName NotifyName);
    void OnCompleted_87A054854D5800A74DF7BC8F9586E6E8(FName NotifyName);
    void OnNotifyEnd_2A3E65754EAFC9D6E44617B286285DF8(FName NotifyName);
    void OnNotifyBegin_2A3E65754EAFC9D6E44617B286285DF8(FName NotifyName);
    void OnInterrupted_2A3E65754EAFC9D6E44617B286285DF8(FName NotifyName);
    void OnBlendOut_2A3E65754EAFC9D6E44617B286285DF8(FName NotifyName);
    void OnCompleted_2A3E65754EAFC9D6E44617B286285DF8(FName NotifyName);
    void OnNotifyEnd_A657281D482A054B7214A5A118085774(FName NotifyName);
    void OnNotifyBegin_A657281D482A054B7214A5A118085774(FName NotifyName);
    void OnInterrupted_A657281D482A054B7214A5A118085774(FName NotifyName);
    void OnBlendOut_A657281D482A054B7214A5A118085774(FName NotifyName);
    void OnCompleted_A657281D482A054B7214A5A118085774(FName NotifyName);
    void NPCDialog();
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void End Dialogue();
    void CustomEvent_0();
    void CustomEvent_1();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void MiraCutscene();
    void MiraCelebration();
    void MiraIntroCelebration();
    void MiraLookFront();
    void Quest();
    void RemoveHint();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NPC_Mira(int32 EntryPoint, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_14, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName Temp_name_Variable_1, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, FName Temp_name_Variable_2, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, float CallFunc_PlayAnimMontage_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, bool CallFunc_IsValid_ReturnValue_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, FString CallFunc_CheckState_Same_ID_4, bool CallFunc_CheckState_Used_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UNPCBound_Pawn_C* K2Node_DynamicCast_AsNPCBound_Pawn, bool K2Node_DynamicCast_bSuccess, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UMira_AnimBP_C* K2Node_DynamicCast_AsMira_Anim_BP, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
