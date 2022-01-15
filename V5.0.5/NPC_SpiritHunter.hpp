#ifndef UE4SS_SDK_NPC_SpiritHunter_HPP
#define UE4SS_SDK_NPC_SpiritHunter_HPP

class ANPC_SpiritHunter_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_Ball;
    UParticleSystemComponent* P_Portal;
    UBoxComponent* SpawnActor;
    float Change_Size_Ball_Lerp_647F72E342BF248FDFF26B9095A31364;
    TEnumAsByte<ETimelineDirection::Type> Change_Size_Ball__Direction_647F72E342BF248FDFF26B9095A31364;
    UTimelineComponent* Change Size Ball;
    ASpiritSwapBound_C* Swap;
    bool InArcane;
    bool SwapOpen;
    bool PlayerNear;
    USpiritHunterAnimBP_C* SpiritHunterAnimBP;
    int32 Shop;
    bool Is Enter;
    int32 RequiredVoidShards;
    bool HasSpiritTunic;

    void Change Size Ball__FinishedFunc();
    void Change Size Ball__UpdateFunc();
    void OnNotifyEnd_B254F8B24B9E3A3BFBC27C81D0B7FD2F(FName NotifyName);
    void OnNotifyBegin_B254F8B24B9E3A3BFBC27C81D0B7FD2F(FName NotifyName);
    void OnInterrupted_B254F8B24B9E3A3BFBC27C81D0B7FD2F(FName NotifyName);
    void OnBlendOut_B254F8B24B9E3A3BFBC27C81D0B7FD2F(FName NotifyName);
    void OnCompleted_B254F8B24B9E3A3BFBC27C81D0B7FD2F(FName NotifyName);
    void OnNotifyEnd_7C5BC40A49C2024631EE88B0BD9A04E8(FName NotifyName);
    void OnNotifyBegin_7C5BC40A49C2024631EE88B0BD9A04E8(FName NotifyName);
    void OnInterrupted_7C5BC40A49C2024631EE88B0BD9A04E8(FName NotifyName);
    void OnBlendOut_7C5BC40A49C2024631EE88B0BD9A04E8(FName NotifyName);
    void OnCompleted_7C5BC40A49C2024631EE88B0BD9A04E8(FName NotifyName);
    void CustomEvent();
    void q2();
    void CustomEvent_1();
    void Quickend2();
    void CustomEvent_2();
    void Finish();
    void CustomEvent_3();
    void CustomEvent_4();
    void CustomEvent_5();
    void Next();
    void SorpriseSH(bool IsEnter);
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void NPCDialog();
    void ReceiveBeginPlay();
    void QuickEnd();
    void CustomEvent_6();
    void LookAtPlayerEnd();
    void CustomEvent_7();
    void LookAtPlayerBegin();
    void CustomEvent_8();
    void CustomEvent_9();
    void fdfas();
    void Sape();
    void CustomEvent_0();
    void First();
    void CustomEvent_10();
    void SHanim();
    void Box Enabled();
    void Box Disabled();
    void End();
    void SHportal();
    void Get Tunic();
    void Hunting();
    void Back to Main();
    void CustomEvent_11();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void ExecuteUbergraph_NPC_SpiritHunter(int32 EntryPoint, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FName K2Node_CustomEvent_NotifyName_9, FName K2Node_CustomEvent_NotifyName_8, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_7, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_6, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, FVector CallFunc_VLerp_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, UTutorialText_C* CallFunc_FinishSpawningActor_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, FName K2Node_CustomEvent_NotifyName_4, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_14, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_15, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_16, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_17, FName Temp_name_Variable_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_18, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_19, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_20, bool Temp_bool_Variable, const TArray<FText>& K2Node_MakeArray_Array, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_21, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, const TArray<FText>& K2Node_MakeArray_Array_6, FText CallFunc_Array_Get_Item, FText CallFunc_Array_Get_Item_1, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, const TArray<FText>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<FText>& K2Node_MakeArray_Array_11, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_12, bool K2Node_SwitchInteger_CmpSuccess_2, const TArray<FText>& K2Node_MakeArray_Array_13, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_22, const TArray<FText>& K2Node_MakeArray_Array_14, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_15, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_16, const TArray<FText>& K2Node_MakeArray_Array_17, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_18, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_19, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_20, const TArray<FText>& K2Node_MakeArray_Array_21, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_22, const TArray<FText>& K2Node_MakeArray_Array_23, const TArray<FText>& K2Node_MakeArray_Array_24, const TArray<FText>& K2Node_MakeArray_Array_25, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_26, FString CallFunc_CheckState_Same_ID_4, bool CallFunc_CheckState_Used_4, const TArray<FText>& K2Node_MakeArray_Array_27, const TArray<FText>& K2Node_MakeArray_Array_28, const TArray<FText>& K2Node_MakeArray_Array_29, bool K2Node_CustomEvent_IsEnter, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_23, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, USpiritHunterAnimBP_C* K2Node_DynamicCast_AsSpirit_Hunter_Anim_BP, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostEventAtLocation_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_4, bool K2Node_SwitchInteger_CmpSuccess_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_30, const TArray<FText>& K2Node_MakeArray_Array_31, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_32, const TArray<FText>& K2Node_MakeArray_Array_33, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_34, const TArray<FText>& K2Node_MakeArray_Array_35, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_36, const TArray<FText>& K2Node_MakeArray_Array_37, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_5, bool CallFunc_GetAsset_Success, int32 CallFunc_GetAsset_Index, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_38, const TArray<FText>& K2Node_MakeArray_Array_39, FString CallFunc_CheckState_Same_ID_5, bool CallFunc_CheckState_Used_5, bool CallFunc_HasCurrency_True, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_40, const TArray<FText>& K2Node_MakeArray_Array_41, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_42, const TArray<FText>& K2Node_MakeArray_Array_43, FString CallFunc_CheckState_Same_ID_6, bool CallFunc_CheckState_Used_6, bool CallFunc_IsRobiValid_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_24, UNewItem_C* CallFunc_GetItemHUD_NewItemHud_1, const TArray<FText>& K2Node_MakeArray_Array_44, uint8 CallFunc_MakeLiteralByte_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_45, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_6, const TArray<FText>& K2Node_MakeArray_Array_46, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_25, bool CallFunc_HasItem_Success_1, int32 CallFunc_HasItem_ItemAmount_1, bool CallFunc_UseItem_Success, int32 CallFunc_UseItem_CurrentAmount, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_26, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_27, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_28, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_29, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_30, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_7, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_31, FString CallFunc_CheckState_Same_ID_7, bool CallFunc_CheckState_Used_7, FString CallFunc_CheckState_Same_ID_8, bool CallFunc_CheckState_Used_8, const TArray<FText>& K2Node_Select_Default, const TArray<FText>& K2Node_MakeArray_Array_47, const TArray<FText>& K2Node_MakeArray_Array_48, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_49, bool K2Node_SwitchInteger_CmpSuccess_4, bool CallFunc_HasCurrency_True_1, uint8 K2Node_Event_EndPlayReason, bool CallFunc_IsRobiValid_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3);
}

#endif
