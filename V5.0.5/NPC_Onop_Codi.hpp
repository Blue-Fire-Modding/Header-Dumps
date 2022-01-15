#ifndef UE4SS_SDK_NPC_Onop_Codi_HPP
#define UE4SS_SDK_NPC_Onop_Codi_HPP

class ANPC_Onop_Codi_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hair;
    UParticleSystemComponent* Fire;
    UStaticMeshComponent* StaticMesh;
    UCodiAnimBlueprint_C* CodiAnimBP;
    bool CanTalk;

    void OnNotifyEnd_61BEB1404B37A07038E45C9874FA7F92(FName NotifyName);
    void OnNotifyBegin_61BEB1404B37A07038E45C9874FA7F92(FName NotifyName);
    void OnInterrupted_61BEB1404B37A07038E45C9874FA7F92(FName NotifyName);
    void OnBlendOut_61BEB1404B37A07038E45C9874FA7F92(FName NotifyName);
    void OnCompleted_61BEB1404B37A07038E45C9874FA7F92(FName NotifyName);
    void Talking1();
    void CustomEvent_5();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent_2();
    void NPCDialog();
    void ExecuteUbergraph_NPC_Onop_Codi(int32 EntryPoint, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName Temp_name_Variable, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, bool K2Node_SwitchInteger_CmpSuccess, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, FVector CallFunc_K2_GetActorLocation_ReturnValue, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_4, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<FText>& K2Node_MakeArray_Array_7, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UCodiAnimBlueprint_C* K2Node_DynamicCast_AsCodi_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
}

#endif
