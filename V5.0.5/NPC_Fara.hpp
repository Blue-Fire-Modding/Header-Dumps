#ifndef UE4SS_SDK_NPC_Fara_HPP
#define UE4SS_SDK_NPC_Fara_HPP

class ANPC_Fara_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* VoidStone;
    UFara_AnimationBP_C* AnimBP;
    ASpirit_C* Spirit;
    bool IsFaraTalking;
    bool IsReadyToTalk;

    void OnNotifyEnd_4403BBA64B56827A474301BE0E6B1B0B(FName NotifyName);
    void OnNotifyBegin_4403BBA64B56827A474301BE0E6B1B0B(FName NotifyName);
    void OnInterrupted_4403BBA64B56827A474301BE0E6B1B0B(FName NotifyName);
    void OnBlendOut_4403BBA64B56827A474301BE0E6B1B0B(FName NotifyName);
    void OnCompleted_4403BBA64B56827A474301BE0E6B1B0B(FName NotifyName);
    void ReceiveBeginPlay();
    void End();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void FaraMomNecklace();
    void NPCDialog();
    void ExecuteUbergraph_NPC_Fara(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName Temp_name_Variable, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, UFara_AnimationBP_C* K2Node_DynamicCast_AsFara_Animation_BP, bool K2Node_DynamicCast_bSuccess, const TArray<FText>& K2Node_MakeArray_Array, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, bool CallFunc_IsRobiValid_ReturnValue, ASpirit_C* K2Node_DynamicCast_AsSpirit, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, FName K2Node_CustomEvent_NotifyName_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6);
}

#endif
