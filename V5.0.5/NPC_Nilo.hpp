#ifndef UE4SS_SDK_NPC_Nilo_HPP
#define UE4SS_SDK_NPC_Nilo_HPP

class ANPC_Nilo_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_Binoculars;
    UNilo_AnimationBP_C* AnimBP;

    void OnNotifyEnd_ECC2BEE147C6284935614D9899912512(FName NotifyName);
    void OnNotifyBegin_ECC2BEE147C6284935614D9899912512(FName NotifyName);
    void OnInterrupted_ECC2BEE147C6284935614D9899912512(FName NotifyName);
    void OnBlendOut_ECC2BEE147C6284935614D9899912512(FName NotifyName);
    void OnCompleted_ECC2BEE147C6284935614D9899912512(FName NotifyName);
    void OnNotifyEnd_A8F7DD9D4C1870173457E3BCBD5951BB(FName NotifyName);
    void OnNotifyBegin_A8F7DD9D4C1870173457E3BCBD5951BB(FName NotifyName);
    void OnInterrupted_A8F7DD9D4C1870173457E3BCBD5951BB(FName NotifyName);
    void OnBlendOut_A8F7DD9D4C1870173457E3BCBD5951BB(FName NotifyName);
    void OnCompleted_A8F7DD9D4C1870173457E3BCBD5951BB(FName NotifyName);
    void OnNotifyEnd_3B4FB94A4FD10ECBA80DE2AF3ADBBBFC(FName NotifyName);
    void OnNotifyBegin_3B4FB94A4FD10ECBA80DE2AF3ADBBBFC(FName NotifyName);
    void OnInterrupted_3B4FB94A4FD10ECBA80DE2AF3ADBBBFC(FName NotifyName);
    void OnBlendOut_3B4FB94A4FD10ECBA80DE2AF3ADBBBFC(FName NotifyName);
    void OnCompleted_3B4FB94A4FD10ECBA80DE2AF3ADBBBFC(FName NotifyName);
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void 22();
    void ReceiveBeginPlay();
    void CustomEvent();
    void NPCDialog();
    void Fin2();
    void FIN();
    void CustomEvent_0();
    void CustomEvent_1();
    void CustomEvent_2();
    void CustomEvent_3();
    void CustomEvent_4();
    void CustomEvent_5();
    void CustomEvent_6();
    void CustomEvent_7();
    void CustomEvent_8();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void FINfin();
    void CustomEvent_9();
    void CustomEvent_10();
    void ExecuteUbergraph_NPC_Nilo(int32 EntryPoint, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_14, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, FName Temp_name_Variable_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_19, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_20, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_21, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_22, FName Temp_name_Variable_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_23, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_24, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_25, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, int32 CallFunc_PostEventAtLocation_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UNilo_AnimationBP_C* K2Node_DynamicCast_AsNilo_Animation_BP, bool K2Node_DynamicCast_bSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_26, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_10, const TArray<FText>& K2Node_MakeArray_Array_11, bool K2Node_SwitchInteger_CmpSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_12, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_13, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_14, const TArray<FText>& K2Node_MakeArray_Array_15, const TArray<FText>& K2Node_MakeArray_Array_16, const TArray<FText>& K2Node_MakeArray_Array_17, const TArray<FText>& K2Node_MakeArray_Array_18, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_19, const TArray<FText>& K2Node_MakeArray_Array_20, const TArray<FText>& K2Node_MakeArray_Array_21, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_22, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, const TArray<FText>& K2Node_MakeArray_Array_23, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_GetAsset_Success, int32 CallFunc_GetAsset_Index, float CallFunc_PlayAnimMontage_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_27, bool CallFunc_IsValid_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_28, bool CallFunc_IsValid_ReturnValue_2, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, const TArray<FText>& K2Node_MakeArray_Array_24, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_25, const TArray<FText>& K2Node_MakeArray_Array_26, const TArray<FText>& K2Node_MakeArray_Array_27, const TArray<FText>& K2Node_MakeArray_Array_28, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_29, bool K2Node_SwitchInteger_CmpSuccess_1, const TArray<FText>& K2Node_MakeArray_Array_30, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_31, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, bool CallFunc_RandomBoolWithWeight_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
}

#endif
