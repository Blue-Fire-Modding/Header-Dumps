#ifndef UE4SS_SDK_NPC_Orip_EastArcane_HPP
#define UE4SS_SDK_NPC_Orip_EastArcane_HPP

class ANPC_Orip_EastArcane_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Ak;
    UStaticMeshComponent* Bottle;
    bool Debug;
    UOrip_AnimationBP_C* AnimBP;
    int32 Cost;

    void CustomEvent_1();
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent_5();
    void Done();
    void NPCDialog();
    void EndORIP();
    void asd();
    void CustomEvent();
    void ReceiveBeginPlay();
    void Debt();
    void CustomEvent_2();
    void FINfin();
    void StopWork();
    void ReceiveEndPlay(uint8 EndPlayReason);
    void ExecuteUbergraph_NPC_Orip_EastArcane(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, TriggerPlayer__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, float CallFunc_PlayAnimMontage_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, bool K2Node_SwitchInteger_CmpSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UOrip_AnimationBP_C* K2Node_DynamicCast_AsOrip_Animation_BP, bool K2Node_DynamicCast_bSuccess, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, bool CallFunc_HasCurrency_True, FString CallFunc_GetDisplayName_ReturnValue_1, FString CallFunc_GetDisplayName_ReturnValue_2, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array_12, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_13, const TArray<FText>& K2Node_MakeArray_Array_14, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_15, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_16, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_17, const TArray<FText>& K2Node_MakeArray_Array_18, const TArray<FText>& K2Node_MakeArray_Array_19, bool K2Node_SwitchInteger_CmpSuccess_1, const TArray<FText>& K2Node_MakeArray_Array_20, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_21, const TArray<FText>& K2Node_MakeArray_Array_22, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_23, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool Temp_bool_Variable_1, UAreaTransition_Elevator_C* K2Node_DynamicCast_AsArea_Transition_Elevator, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, UAreaTransition_Elevator_C* K2Node_DynamicCast_AsArea_Transition_Elevator_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, uint8 K2Node_Event_EndPlayReason);
}

#endif
