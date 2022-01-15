#ifndef UE4SS_SDK_NPC_Master_BarriWife_HPP
#define UE4SS_SDK_NPC_Master_BarriWife_HPP

class ANPC_Master_BarriWife_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hair;
    USkeletalMeshComponent* Baby;
    UVon_AnimBP_C* AnimBP_0;
    bool GetFlower;

    void CustomEvent();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void NPCDialog();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NPC_Master_BarriWife(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, float CallFunc_PlayAnimMontage_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_MakeArray_Array_1);
}

#endif
