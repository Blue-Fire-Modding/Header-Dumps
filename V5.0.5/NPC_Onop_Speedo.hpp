#ifndef UE4SS_SDK_NPC_Onop_Speedo_HPP
#define UE4SS_SDK_NPC_Onop_Speedo_HPP

class ANPC_Onop_Speedo_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USpeedoAnimBlueprint_C* SpeedoAnimBP;

    void CustomEvent_5();
    void PlayLaberinth();
    void Talking1();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void Win();
    void CustomEvent();
    void NPCDialog();
    void CustomEvent_2();
    void ReceiveBeginPlay();
    void Show Tutorial();
    void ExecuteUbergraph_NPC_Onop_Speedo(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FTransform CallFunc_MakeTransform_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, UTutorialText_C* CallFunc_FinishSpawningActor_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array, const TArray<FText>& K2Node_MakeArray_Array_1, bool K2Node_SwitchInteger_CmpSuccess, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_4, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_6, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, USpeedoAnimBlueprint_C* K2Node_DynamicCast_AsSpeedo_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_9, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_10, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, uint8 CallFunc_MakeLiteralByte_ReturnValue, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, bool CallFunc_HasCurrency_True, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_12, const TArray<FText>& K2Node_MakeArray_Array_13, FText CallFunc_MakeLiteralText_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array_14, const TArray<FText>& K2Node_MakeArray_Array_15, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1);
}

#endif
