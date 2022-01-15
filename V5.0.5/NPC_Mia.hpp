#ifndef UE4SS_SDK_NPC_Mia_HPP
#define UE4SS_SDK_NPC_Mia_HPP

class ANPC_Mia_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Sword2;
    UStaticMeshComponent* Sword;
    UMia_AnimBP_C* AnimBP;

    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void NPCDialog();
    void MoveGear();
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void en();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NPC_Mia(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_PlayAnimMontage_ReturnValue, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UMia_AnimBP_C* K2Node_DynamicCast_AsMia_Anim_BP, bool K2Node_DynamicCast_bSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, bool CallFunc_GetAsset_Success, int32 CallFunc_GetAsset_Index, const TArray<FText>& K2Node_MakeArray_Array_1, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
}

#endif
