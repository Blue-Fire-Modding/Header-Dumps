#ifndef UE4SS_SDK_NPC_Master_Onop_HPP
#define UE4SS_SDK_NPC_Master_Onop_HPP

class ANPC_Master_Onop_C : UNPC_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* Ak2;
    UAkComponent* Ak;
    bool DebugMode;
    UVon_AnimBP_C* AnimBP;
    bool BindMusicCallback;
    UAkAudioEvent* TypeFluteMusic;
    FString IDMusicCallback;
    bool Have POI;
    UAkAudioEvent* TypeFluteMusic2;
    APlayer_Character_BP_C* Player;

    void CustomEvent_1();
    void ReceiveAnyDamage(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void OnopFlute();
    void NPCDialog();
    void ReceiveBeginPlay();
    void OnopFluteSecond();
    void ExecuteUbergraph_NPC_Master_Onop(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, FluteOnopTempo__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, FluteOnopTempoSecond__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, const TArray<FText>& K2Node_MakeArray_Array, float K2Node_Event_Damage, const UDamageType* K2Node_Event_DamageType, AController* K2Node_Event_InstigatedBy, AActor* K2Node_Event_DamageCauser, float CallFunc_PlayAnimMontage_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_PostAkEvent_ReturnValue_1);
}

#endif
