#ifndef UE4SS_SDK_NPC_Onop_Onrom_HPP
#define UE4SS_SDK_NPC_Onop_Onrom_HPP

class ANPC_Onop_Onrom_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Face;
    UStaticMeshComponent* Book;
    UStaticMeshComponent* Hat;
    UOnromAnimBlueprint_C* OnromAnimBP;
    int32 ShopOnrom;

    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent();
    void CustomEvent_2();
    void FINfin();
    void CustomEvent_3();
    void NPCDialog();
    void CustomEvent_0();
    void ExecuteUbergraph_NPC_Onop_Onrom(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UOnromAnimBlueprint_C* K2Node_DynamicCast_AsOnrom_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_3, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_MakeArray_Array_4, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_5, const TArray<FText>& K2Node_MakeArray_Array_6, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_7, const TArray<FText>& K2Node_MakeArray_Array_8, const TArray<FText>& K2Node_MakeArray_Array_9, bool K2Node_SwitchInteger_CmpSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_10, const TArray<FText>& K2Node_MakeArray_Array_11, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
