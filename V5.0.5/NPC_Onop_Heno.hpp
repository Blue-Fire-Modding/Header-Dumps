#ifndef UE4SS_SDK_NPC_Onop_Heno_HPP
#define UE4SS_SDK_NPC_Onop_Heno_HPP

class ANPC_Onop_Heno_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkFear;
    UStaticMeshComponent* StaticMesh;
    UVon_AnimBP_C* AnimBP_0;
    UHenoAnimBlueprint_C* HenoAnimBP;

    void NPCDialog();
    void Talking1();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent();
    void ExecuteUbergraph_NPC_Onop_Heno(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, bool Temp_bool_IsClosed_Variable, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<FText>& K2Node_MakeArray_Array_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, UHenoAnimBlueprint_C* K2Node_DynamicCast_AsHeno_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, float CallFunc_PlayAnimMontage_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue);
}

#endif
