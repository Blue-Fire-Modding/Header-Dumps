#ifndef UE4SS_SDK_NPC_Onop_Compositor_Ready_HPP
#define UE4SS_SDK_NPC_Onop_Compositor_Ready_HPP

class ANPC_Onop_Compositor_Ready_C : UNPC_Master_Onop_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Face;
    UStaticMeshComponent* Varita;
    UMusicComposerAnimBlueprint_C* PaulAnimBP;
    int32 All invitation;

    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void CustomEvent_2();
    void NPCDialog();
    void CustomEvent();
    void ReceiveBeginPlay();
    void CustomEvent_3();
    void CustomEvent_0();
    void ExecuteUbergraph_NPC_Onop_Compositor_Ready(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, Removed__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, UMusicComposerAnimBlueprint_C* K2Node_DynamicCast_AsMusic_Composer_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<FText>& K2Node_MakeArray_Array_1, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_GetAsset_Success, int32 CallFunc_GetAsset_Index, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FString CallFunc_CheckState_Same_ID_4, bool CallFunc_CheckState_Used_4, bool CallFunc_BooleanAND_ReturnValue_2, UNewItem_C* CallFunc_GetItemHUD_NewItemHud, FString CallFunc_CheckState_Same_ID_5, bool CallFunc_CheckState_Used_5, int32 CallFunc_MakeLiteralInt_ReturnValue, TArray<uint8>& K2Node_MakeArray_Array_4, UNewItem_C* CallFunc_GetItemHUD_NewItemHud_1, bool CallFunc_GetItem_Success, bool CallFunc_GetItem_SpecialPopUp, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1);
}

#endif
