#ifndef UE4SS_SDK_BP_BossDoor_Sanctuary_HPP
#define UE4SS_SDK_BP_BossDoor_Sanctuary_HPP

class ABP_BossDoor_Sanctuary_C : UDoor_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UArrowComponent* NewPlayerLoc;
    UParticleSystemComponent* P_Shine_Sanctuary;
    UBoxComponent* BoxSanctuary;
    UStaticMeshComponent* SanctuaryBase;
    UStaticMeshComponent* SM_SanctuaryStone;
    USkeletalMeshComponent* SK_SanctuaryStone;
    UAkComponent* AkStartKillBossOverrideSound;
    UAkComponent* AkStopKillBossOverrideSound;
    UAkComponent* AkStopOverrideSound;
    UAkComponent* AkStartOverrideSound;
    UBillboardComponent* Lock Location;
    float Scale_Glow_Intensity_8DFB141240942A9ED4C553B576DD07E8;
    float Scale_Scale_8DFB141240942A9ED4C553B576DD07E8;
    TEnumAsByte<ETimelineDirection::Type> Scale__Direction_8DFB141240942A9ED4C553B576DD07E8;
    UTimelineComponent* Scale;
    bool Debug Cutscene;
    bool Debug OpenDoor;
    FLinearColor Glow Color;
    ULevelSequence* Sequence OpenDoor;
    ULevelSequence* Sequence Start;
    ULevelSequence* Sequence End;
    AEnemy_Character_Parent_C* Boss;
    FString ID Boss;
    FText Boss Name;
    FText Boss Subtitle;
    TEnumAsByte<StreamingChunks::Type> Current Chunk;
    FString ID BossDoor;
    TArray<ADoor_BP_C*> Other Doors;
    float Slow Motion Time;
    UAkAudioEvent* CutsceneAudioOverride;
    bool AudioOverride;
    UAkAudioEvent* StopCutsceneAudioOverride;
    bool KillBossAudioOverride;
    UAkAudioEvent* KillBossStartAudioOverride;
    UAkAudioEvent* KillBossStopAudioOverride;
    UMaterialInstanceDynamic* Material Door;
    UAkAudioEvent* SequenceOpenDoorSound;
    UAkAudioEvent* AreaBossMusic;
    bool FirstTimeOpenDoor;
    float DelayMusicBossStart;
    UMaterialInstanceDynamic* Material Base;
    TArray<AActor*> EnableActors;
    USkipCutscene_Action_UI_C* SkipCutsceneUI;
    ABP_TeleportToEntrance_C* BP Teleport Entrance;
    UNPC_Intro_C* NPCIntro;

    void Scale__FinishedFunc();
    void Scale__UpdateFunc();
    void Scale__VFX Spawn__EventFunc();
    void Scale__Open Door__EventFunc();
    void OnNotifyEnd_3AAF23994F5E7C59143EC4B5A49DDDB0(FName NotifyName);
    void OnNotifyBegin_3AAF23994F5E7C59143EC4B5A49DDDB0(FName NotifyName);
    void OnInterrupted_3AAF23994F5E7C59143EC4B5A49DDDB0(FName NotifyName);
    void OnBlendOut_3AAF23994F5E7C59143EC4B5A49DDDB0(FName NotifyName);
    void OnCompleted_3AAF23994F5E7C59143EC4B5A49DDDB0(FName NotifyName);
    void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void Reset Door();
    void Kill Boss();
    void Boss Title();
    void Relocate Player();
    void Close Doors();
    void Open Boss Door();
    void Resume Start();
    void Set Block Door(bool bLock);
    void Boss Door Fast Open();
    void ResumeKillBossEnd();
    void New Open Door();
    void BndEvt__BoxSanctuary_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void FinishCutscene();
    void BndEvt__BoxSanctuary_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Hide Actors(bool Hide);
    void Cutscene ShowDialog();
    void Finish Dialog();
    void Cutscene ShowTeleport();
    void SkipCutscene Controller(bool Spawn);
    void Remove Title();
    void MusicStart();
    void Skip Cutscene Boss();
    void Skip Cutscene Door();
    void OnRemovePickupUI(bool bRemove);
    void ExecuteUbergraph_BP_BossDoor_Sanctuary(int32 EntryPoint, FName K2Node_CustomEvent_NotifyName_3, FName K2Node_CustomEvent_NotifyName_2, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_1, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName Temp_name_Variable, FVector CallFunc_Conv_FloatToVector_ReturnValue, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, UPickUp_Action_UI_C* CallFunc_Create_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, UMessage_PopUp_C* CallFunc_Create_ReturnValue_1, FKey K2Node_InputActionEvent_Key_1, FKey K2Node_InputActionEvent_Key, FTransform CallFunc_MakeTransform_ReturnValue, USkipCutscene_Action_UI_C* CallFunc_Create_ReturnValue_2, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsRobiValid_ReturnValue, SkipCutscene__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsInViewport_ReturnValue_1, SkipCutscene__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, OnRemovePickupUI__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_1, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_1, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Cutscene_OutputPin, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_2, bool K2Node_Event_Block, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool Temp_bool_Variable, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_3, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_4, int32 CallFunc_PostAkEvent_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_6, float CallFunc_Cutscene_OutputPin_1, int32 CallFunc_PostEventAtLocation_ReturnValue_4, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_2, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_2, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, int32 CallFunc_PostEventAtLocation_ReturnValue_6, bool CallFunc_IsRobiValid_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_8, UNPC_Intro_C* CallFunc_Create_ReturnValue_3, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_8, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate_9, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate_10, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_9, UPlayerController* CallFunc_GetPlayerController_ReturnValue_5, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_11, const FText Temp_text_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FRotator CallFunc_MakeRotator_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, bool CallFunc_K2_SetActorRotation_ReturnValue_1, FRotator CallFunc_FindLookAtRotation_ReturnValue_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, FRotator CallFunc_MakeRotator_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_7, FVector CallFunc_K2_GetActorLocation_ReturnValue_8, FRotator CallFunc_FindLookAtRotation_ReturnValue_3, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, FVector CallFunc_MakeVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_4, bool CallFunc_K2_SetActorRotation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_9, FVector CallFunc_GetSocketLocation_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue_4, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_BreakRotator_Roll_4, float CallFunc_BreakRotator_Pitch_4, float CallFunc_BreakRotator_Yaw_4, FRotator CallFunc_MakeRotator_ReturnValue_5, UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_9, int32 CallFunc_PostEventAtLocation_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_11, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_12, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, FHitResult CallFunc_K2_SetRelativeTransform_SweepHitResult, FName K2Node_CustomEvent_NotifyName_4, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, bool K2Node_CustomEvent_Hide, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_10, OnMontagePlayDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_12, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_CheckState_Same_ID_3, bool CallFunc_CheckState_Used_3, FString CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Array_Index_Variable, AActor* CallFunc_Array_Get_Item, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult_2, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_NotEqual_IntInt_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, const TArray<FText>& K2Node_MakeArray_Array_1, bool CallFunc_IsRobiValid_ReturnValue_11, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_2, bool K2Node_CustomEvent_Spawn, bool CallFunc_IsRobiValid_ReturnValue_12, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_3, int32 CallFunc_PostAkEvent_ReturnValue_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_13, int32 CallFunc_PostEventAtLocation_ReturnValue_14, int32 CallFunc_PostEventAtLocation_ReturnValue_15, int32 CallFunc_PostEventAtLocation_ReturnValue_16, int32 CallFunc_PostEventAtLocation_ReturnValue_17, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsRobiValid_ReturnValue_13, int32 CallFunc_PostEventAtLocation_ReturnValue_18, bool CallFunc_IsRobiValid_ReturnValue_14, bool CallFunc_IsRobiValid_ReturnValue_15, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_3, int32 CallFunc_PostAkEvent_ReturnValue_3, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, bool Temp_bool_IsClosed_Variable, float CallFunc_Cutscene_OutputPin_2, float CallFunc_Cutscene_OutputPin_3, float CallFunc_Cutscene_OutputPin_4, int32 Temp_int_Loop_Counter_Variable, bool K2Node_Event_bRemove, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_16, bool CallFunc_IsInViewport_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_2);
}

#endif
