#ifndef UE4SS_SDK_NPC_Master_Barri_HPP
#define UE4SS_SDK_NPC_Master_Barri_HPP

class ANPC_Master_Barri_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hat;
    UStaticMeshComponent* Shield;
    UStaticMeshComponent* Sword;
    UBarriAnimBlueprint_C* BarriAnimBP;
    bool GetFlower;

    void Talking1();
    void CustomEvent_2();
    void CustomEvent_3();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent();
    void NPCDialog();
    void CustomEvent_0();
    void CustomEvent_5();
    void ExecuteUbergraph_NPC_Master_Barri(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, const TArray<FText>& K2Node_MakeArray_Array_2, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, UBarriAnimBlueprint_C* K2Node_DynamicCast_AsBarri_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, float CallFunc_PlayAnimMontage_ReturnValue, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<FText>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9, const TArray<FText>& K2Node_MakeArray_Array_10, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_11, bool CallFunc_UseItem_Success, int32 CallFunc_UseItem_CurrentAmount, FText CallFunc_MakeLiteralText_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array_12, const TArray<FText>& K2Node_MakeArray_Array_13);
}

#endif
