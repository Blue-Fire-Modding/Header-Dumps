#ifndef UE4SS_SDK_BP_Enemies_Ambush_HPP
#define UE4SS_SDK_BP_Enemies_Ambush_HPP

class ABP_Enemies_Ambush_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Billboard;
    UBoxComponent* Box;
    ULevelSequence* Sequence Start;
    ULevelSequence* Sequence End;
    TArray<AEnemy_Character_Parent_C*> Enemies;
    bool Abort;
    FString ID;
    bool UseCustomID;
    int32 Amount Enemies;
    UAkAudioEvent* ReturnMusic;
    UAkAudioEvent* AmbushStart;
    UAkAudioEvent* AmbushEnd;
    APlayer_Character_BP_C* Player;
    AActor* Target;
    UAkAudioEvent* SpawnEnemieSound;
    float DelayIntroMusic;
    AChest_Master_C* Chest;
    bool CharacterCutsceneGain;
    bool RotatePlayer;
    UAkAudioEvent* AmbushRealEnd;
    float AmbushRealEndDelay;
    bool SkipMontage;

    void UserConstructionScript(FString CallFunc_GetDisplayName_ReturnValue);
    void OnNotifyEnd_438BF4D14BD2B5E73CDCD3988A5FBB80(FName NotifyName);
    void OnNotifyBegin_438BF4D14BD2B5E73CDCD3988A5FBB80(FName NotifyName);
    void OnInterrupted_438BF4D14BD2B5E73CDCD3988A5FBB80(FName NotifyName);
    void OnBlendOut_438BF4D14BD2B5E73CDCD3988A5FBB80(FName NotifyName);
    void OnCompleted_438BF4D14BD2B5E73CDCD3988A5FBB80(FName NotifyName);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Spawn Enemies();
    void Remove Minion();
    void Resume Sequence();
    void Play Sequence(bool Is Start);
    void Relocate Player();
    void ExecuteUbergraph_BP_Enemies_Ambush(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName, FName Temp_name_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, FName K2Node_CustomEvent_NotifyName_4, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable_2, FName K2Node_CustomEvent_NotifyName_1, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Array_Index_Variable_2, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Array_Index_Variable_3, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UEnemy_Character_Parent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Cutscene_OutputPin, bool K2Node_CustomEvent_Is_Start, ULevelSequence* K2Node_Select_Default, int32 Temp_int_Array_Index_Variable_4, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, UEnemy_Character_Parent_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsRobiValid_ReturnValue_1, float CallFunc_Cutscene_OutputPin_1, UEnemy_Character_Parent_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_6, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, UEnemy_Character_Parent_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2, FHitResult CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_5, bool CallFunc_IsRobiValid_ReturnValue_7, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_7, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_PostEventAtLocation_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_9, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, UEnemy_Character_Parent_C* CallFunc_Array_Get_Item_4, bool CallFunc_IsRobiValid_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_9, int32 CallFunc_PostEventAtLocation_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_11, FRotator CallFunc_K2_GetActorRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool CallFunc_K2_SetActorRotation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, FName K2Node_CustomEvent_NotifyName_2, float K2Node_Select_Default_2, FRotator CallFunc_MakeRotator_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_12, bool CallFunc_IsRobiValid_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_13, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, FName K2Node_CustomEvent_NotifyName_3, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6);
}

#endif
