#ifndef UE4SS_SDK_NPC_Mira_Firefall_HPP
#define UE4SS_SDK_NPC_Mira_Firefall_HPP

class ANPC_Mira_Firefall_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMiraFirefall_AnimBP_C* AnimBP;
    bool LocalSpeakFirst;

    void OnNotifyEnd_083E5CE6498C0ECB310187BC2F65D008(FName NotifyName);
    void OnNotifyBegin_083E5CE6498C0ECB310187BC2F65D008(FName NotifyName);
    void OnInterrupted_083E5CE6498C0ECB310187BC2F65D008(FName NotifyName);
    void OnBlendOut_083E5CE6498C0ECB310187BC2F65D008(FName NotifyName);
    void OnCompleted_083E5CE6498C0ECB310187BC2F65D008(FName NotifyName);
    void OnNotifyEnd_53EB6C4E4B1B44B09AAC9BB4280B1A33(FName NotifyName);
    void OnNotifyBegin_53EB6C4E4B1B44B09AAC9BB4280B1A33(FName NotifyName);
    void OnInterrupted_53EB6C4E4B1B44B09AAC9BB4280B1A33(FName NotifyName);
    void OnBlendOut_53EB6C4E4B1B44B09AAC9BB4280B1A33(FName NotifyName);
    void OnCompleted_53EB6C4E4B1B44B09AAC9BB4280B1A33(FName NotifyName);
    void OnNotifyEnd_CEE364074B518F7FE85E2FBBBAC89DA0(FName NotifyName);
    void OnNotifyBegin_CEE364074B518F7FE85E2FBBBAC89DA0(FName NotifyName);
    void OnInterrupted_CEE364074B518F7FE85E2FBBBAC89DA0(FName NotifyName);
    void OnBlendOut_CEE364074B518F7FE85E2FBBBAC89DA0(FName NotifyName);
    void OnCompleted_CEE364074B518F7FE85E2FBBBAC89DA0(FName NotifyName);
    void NPCDialog();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void End Dialogue();
    void MiraCutscene();
    void MiraCelebration();
    void MiraIntroCelebration();
    void ReceiveBeginPlay();
    void MiraLookFront();
    void CustomEvent_0();
    void ExecuteUbergraph_NPC_Mira_Firefall(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_14, FName K2Node_CustomEvent_NotifyName_13, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_11, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName Temp_name_Variable, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName Temp_name_Variable_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName Temp_name_Variable_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, float CallFunc_PlayAnimMontage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UMiraFirefall_AnimBP_C* K2Node_DynamicCast_AsMira_Firefall_Anim_BP, bool K2Node_DynamicCast_bSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FString CallFunc_Conv_BoolToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, bool CallFunc_IsValid_ReturnValue_3);
}

#endif
