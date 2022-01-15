#ifndef UE4SS_SDK_NPC_Onop_Geng_HPP
#define UE4SS_SDK_NPC_Onop_Geng_HPP

class ANPC_Onop_Geng_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hair;
    UStaticMeshComponent* StaticMesh;
    UOnopGengAnimBlueprint_C* Geng;

    void Talking1();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void NPCDialog();
    void CustomEvent();
    void ExecuteUbergraph_NPC_Onop_Geng(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, bool CallFunc_IsRobiValid_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UOnopGengAnimBlueprint_C* K2Node_DynamicCast_AsOnop_Geng_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, ASpirit_C* K2Node_DynamicCast_AsSpirit, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_2, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<FText>& K2Node_MakeArray_Array_3);
}

#endif
