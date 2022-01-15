#ifndef UE4SS_SDK_NPC_Onop_Thief_HPP
#define UE4SS_SDK_NPC_Onop_Thief_HPP

class ANPC_Onop_Thief_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMaterialBillboardComponent* MaterialBillboard;
    UStaticMeshComponent* Bag;
    UStaticMeshComponent* Lantern;
    bool Deal;
    UOnopThiefAnimBlueprint_C* OnopAnimBP;

    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void ReceiveBeginPlay();
    void Talking1();
    void CustomEvent_2();
    void CustomEvent();
    void CustomEvent_3();
    void CustomEvent_4();
    void CustomEvent_5();
    void CustomEvent_6();
    void NPCDialog();
    void ExecuteUbergraph_NPC_Onop_Thief(int32 EntryPoint, const TArray<FText>& K2Node_MakeArray_Array, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UOnopThiefAnimBlueprint_C* K2Node_DynamicCast_AsOnop_Thief_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, const TArray<FText>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool K2Node_SwitchInteger_CmpSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, bool CallFunc_HasCurrency_True, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_8, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, const TArray<FText>& K2Node_MakeArray_Array_12, const TArray<FText>& K2Node_MakeArray_Array_13, const TArray<FText>& K2Node_MakeArray_Array_14, const TArray<FText>& K2Node_MakeArray_Array_15, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
}

#endif
