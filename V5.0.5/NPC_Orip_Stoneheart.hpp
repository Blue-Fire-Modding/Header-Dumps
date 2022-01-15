#ifndef UE4SS_SDK_NPC_Orip_Stoneheart_HPP
#define UE4SS_SDK_NPC_Orip_Stoneheart_HPP

class ANPC_Orip_Stoneheart_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Ak;
    UStaticMeshComponent* Orip_Saw_WoodBase;
    UStaticMeshComponent* Bottle;
    UOrip_AnimationBP_C* AnimBP;
    int32 Cost;
    UOrip_AnimationBP_Saw_C* AnimSawBP;

    void end123();
    void CustomEvent_5();
    void CustomEvent_0();
    void LookAtPlayerEnd();
    void LookAtPlayerBegin();
    void Debt2();
    void CustomEvent();
    void NoMoney();
    void Payall();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void NPCDialog();
    void CustomEvent_1();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void ExecuteUbergraph_NPC_Orip_Stoneheart(int32 EntryPoint, UGameInstance* CallFunc_GetGameInstance_ReturnValue, UBlueFire_Game_Instance_C* K2Node_DynamicCast_AsBlue_Fire_Game_Instance, bool K2Node_DynamicCast_bSuccess, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, const FString Temp_string_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const FString Temp_string_Variable_1, const TArray<FText>& K2Node_MakeArray_Array, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, bool CallFunc_BooleanAND_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, bool K2Node_SwitchInteger_CmpSuccess, const TArray<FText>& K2Node_MakeArray_Array_8, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_MakeArray_Array_9, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_10, const TArray<FText>& K2Node_MakeArray_Array_11, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_12, const TArray<FText>& K2Node_MakeArray_Array_13, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_14, bool CallFunc_HasCurrency_True, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, float CallFunc_PlayAnimMontage_ReturnValue, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UOrip_AnimationBP_Saw_C* K2Node_DynamicCast_AsOrip_Animation_BP_Saw, bool K2Node_DynamicCast_bSuccess_1, const TArray<FText>& K2Node_MakeArray_Array_15, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_16, const TArray<FText>& K2Node_MakeArray_Array_17, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, uint8 K2Node_Event_EndPlayReason, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
}

#endif
