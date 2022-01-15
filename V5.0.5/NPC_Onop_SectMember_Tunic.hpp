#ifndef UE4SS_SDK_NPC_Onop_SectMember_Tunic_HPP
#define UE4SS_SDK_NPC_Onop_SectMember_Tunic_HPP

class ANPC_Onop_SectMember_Tunic_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hat;
    USectMemberAnimBlueprint_C* SectAnimBP;
    bool Serompejarron;

    void NPCDialog();
    void CustomEvent_0();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void QuickEnd();
    void CustomEvent();
    void q2();
    void ReceiveBeginPlay();
    void BuyTunic();
    void CustomEvent_2();
    void ExecuteUbergraph_NPC_Onop_SectMember_Tunic(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, float CallFunc_PlayAnimMontage_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, USectMemberAnimBlueprint_C* K2Node_DynamicCast_AsSect_Member_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, bool K2Node_SwitchInteger_CmpSuccess, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, bool CallFunc_GetAsset_Success, int32 CallFunc_GetAsset_Index, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2);
}

#endif
