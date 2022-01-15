#ifndef UE4SS_SDK_BP_BossDoor_Key_HPP
#define UE4SS_SDK_BP_BossDoor_Key_HPP

class ABP_BossDoor_Key_C : UDoor_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkStartKillBossOverrideSound;
    UAkComponent* AkStopKillBossOverrideSound;
    UAkComponent* AkStopOverrideSound;
    UAkComponent* AkStartOverrideSound;
    UBillboardComponent* Lock Location;
    UBillboardComponent* NewPlayerLocation;
    bool Debug Cutscene;
    bool Skip Cutscene;
    bool Fade;
    ULevelSequence* Sequence Start;
    ULevelSequence* Sequence End;
    AEnemy_Character_Parent_C* Boss;
    FText Boss Name;
    FText Boss Subtitle;
    TEnumAsByte<StreamingChunks::Type> Current Chunk;
    FString ID BossDoor;
    TArray<ADoor_BP_C*> Other Doors;
    float Slow Motion Time;
    bool Trigger Achievement;
    TEnumAsByte<Achievements::Type> Achievement;
    UAkAudioEvent* CutsceneAudioOverride;
    bool AudioOverride;
    UAkAudioEvent* StopCutsceneAudioOverride;
    bool KillBossAudioOverride;
    UAkAudioEvent* KillBossStartAudioOverride;
    UAkAudioEvent* KillBossStopAudioOverride;
    float DelayIntroMusic;
    UAkAudioEvent* IntroMusicType;
    bool DoorsClosed;
    float DelayMusicSemiBossStart;

    void CloseDoorsSemiBossA();
    void ReceiveBeginPlay();
    void Reset Door();
    void Kill Boss();
    void Boss Title();
    void Relocate Player();
    void Close Doors();
    void Open Boss Door();
    void Resume Start();
    void Teleport();
    void Set Block Door(bool bLock);
    void Boss Door Fast Open();
    void ResumeKillBossEnd();
    void SkipCutscene();
    void Force Close Doors();
    void MusicSemiBossStart();
    void ExecuteUbergraph_BP_BossDoor_Key(int32 EntryPoint, float CallFunc_Cutscene_OutputPin, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, int32 Temp_int_Array_Index_Variable, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, UNPC_Intro_C* CallFunc_Create_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UDoor_BP_C* CallFunc_Array_Get_Item, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool CallFunc_IsRobiValid_ReturnValue_1, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, int32 Temp_int_Array_Index_Variable_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, UDoor_BP_C* CallFunc_Array_Get_Item_1, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_1, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, APawn* CallFunc_GetPlayerPawn_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Cutscene_OutputPin_1, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, bool K2Node_Event_Block, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_4, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_5, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_IsRobiValid_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_7, int32 CallFunc_PostAkEvent_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue_3, float CallFunc_Cutscene_OutputPin_2, int32 CallFunc_PostEventAtLocation_ReturnValue_5, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, bool CallFunc_IsRobiValid_ReturnValue_8, bool CallFunc_IsRobiValid_ReturnValue_9, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FRotator CallFunc_FindLookAtRotation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, FRotator CallFunc_FindLookAtRotation_ReturnValue_2, FRotator CallFunc_FindLookAtRotation_ReturnValue_3, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, FRotator CallFunc_MakeRotator_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_3, bool CallFunc_K2_SetActorRotation_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_4, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_6, FRotator CallFunc_FindLookAtRotation_ReturnValue_4, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, FRotator CallFunc_MakeRotator_ReturnValue_5, bool CallFunc_K2_SetActorRotation_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_7, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_9, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, FString CallFunc_Concat_StrStr_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable, UDoor_BP_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_11, bool CallFunc_Less_IntInt_ReturnValue_2, bool Temp_bool_IsClosed_Variable, int32 CallFunc_PostEventAtLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_9, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_10, float CallFunc_Cutscene_OutputPin_3);
}

#endif
