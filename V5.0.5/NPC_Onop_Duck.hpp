#ifndef UE4SS_SDK_NPC_Onop_Duck_HPP
#define UE4SS_SDK_NPC_Onop_Duck_HPP

class ANPC_Onop_Duck_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Duck;
    bool MeetOnop;
    UDuckAnimBlueprint_C* DuckAnimBP;

    void OnNotifyEnd_2DAFA649466FD36C8601E6BD2C68B225(FName NotifyName);
    void OnNotifyBegin_2DAFA649466FD36C8601E6BD2C68B225(FName NotifyName);
    void OnInterrupted_2DAFA649466FD36C8601E6BD2C68B225(FName NotifyName);
    void OnBlendOut_2DAFA649466FD36C8601E6BD2C68B225(FName NotifyName);
    void OnCompleted_2DAFA649466FD36C8601E6BD2C68B225(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent_7();
    void Get Duck();
    void NPCDialog();
    void ExecuteUbergraph_NPC_Onop_Duck(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, FName Temp_name_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_4, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_4, int32 CallFunc_PostEvent_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, UDuckAnimBlueprint_C* K2Node_DynamicCast_AsDuck_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_RandomIntegerInRange_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, FText CallFunc_MakeLiteralText_ReturnValue_2, bool CallFunc_GetAsset_Success, int32 CallFunc_GetAsset_Index, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_Select_Default, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, const TArray<FText>& K2Node_Select_Default_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, bool CallFunc_UseItem_Success, int32 CallFunc_UseItem_CurrentAmount, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, int32 CallFunc_PostEvent_ReturnValue_1, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_3, int32 CallFunc_PostEvent_ReturnValue_4);
}

#endif
