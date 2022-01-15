#ifndef UE4SS_SDK_NPC_Onop_IO_Wolfgang_Rust_HPP
#define UE4SS_SDK_NPC_Onop_IO_Wolfgang_Rust_HPP

class ANPC_Onop_IO_Wolfgang_Rust_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Hair;
    UParticleSystemComponent* P_MusicalNotes;
    UStaticMeshComponent* Flute;
    UBechAnimBlueprint_C* AnimBPBech;

    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void CustomEvent_4();
    void NPCDialog();
    void ExecuteUbergraph_NPC_Onop_IO_Wolfgang_Rust(int32 EntryPoint, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, const TArray<FText>& K2Node_MakeArray_Array, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UBechAnimBlueprint_C* K2Node_DynamicCast_AsBech_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
}

#endif
