#ifndef UE4SS_SDK_NPC_Orip_ArcaneNorth_HPP
#define UE4SS_SDK_NPC_Orip_ArcaneNorth_HPP

class ANPC_Orip_ArcaneNorth_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Ak;
    UStaticMeshComponent* Saw;
    UStaticMeshComponent* Hammer;
    UOrip_AnimationBP_C* AnimBP;
    int32 Cost;
    UOripFirst_AnimBP_C* ToolsBP;
    AActor* Sound;
    bool MeetOrip;

    void OnNotifyEnd_F7E36C3145C82A7483A65DB162D739FE(FName NotifyName);
    void OnNotifyBegin_F7E36C3145C82A7483A65DB162D739FE(FName NotifyName);
    void OnInterrupted_F7E36C3145C82A7483A65DB162D739FE(FName NotifyName);
    void OnBlendOut_F7E36C3145C82A7483A65DB162D739FE(FName NotifyName);
    void OnCompleted_F7E36C3145C82A7483A65DB162D739FE(FName NotifyName);
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void NPCDialog();
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void Ua();
    void ReceiveBeginPlay();
    void CustomEvent();
    void as();
    void CustomEvent_2();
    void NewQuest();
    void CustomEvent_3();
    void AfterElevators();
    void CustomEvent_1();
    void OripHey();
    void AdjustShadow();
    void Finish();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void ExecuteUbergraph_NPC_Orip_ArcaneNorth(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, ExitDialog__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, FName Temp_name_Variable, FinishActivate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, float CallFunc_PlayAnimMontage_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, bool K2Node_SwitchInteger_CmpSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<FText>& K2Node_MakeArray_Array_11, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_12, const TArray<FText>& K2Node_MakeArray_Array_13, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_14, bool Temp_bool_IsClosed_Variable, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_15, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_16, UDoor_BP_C* K2Node_DynamicCast_AsDoor_BP, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UOripFirst_AnimBP_C* K2Node_DynamicCast_AsOrip_First_Anim_BP, bool K2Node_DynamicCast_bSuccess_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_17, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_SwitchInteger_CmpSuccess_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_18, const TArray<FText>& K2Node_MakeArray_Array_19, const TArray<FText>& K2Node_MakeArray_Array_20, const TArray<FText>& K2Node_MakeArray_Array_21, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue_1, FVector CallFunc_GetSocketLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, uint8 K2Node_Event_EndPlayReason, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult);
}

#endif
