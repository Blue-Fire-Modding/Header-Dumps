#ifndef UE4SS_SDK_BP_BossDoor_Queen_HPP
#define UE4SS_SDK_BP_BossDoor_Queen_HPP

class ABP_BossDoor_Queen_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* Ghost Location;
    UBillboardComponent* Lock Location;
    UCameraComponent* Camera;
    UBoxComponent* Box;
    UBillboardComponent* New Player Location;
    USceneComponent* DefaultSceneRoot;
    bool Debug;
    ULevelSequence* Sequence Start;
    ULevelSequence* Sequence End;
    AEnemy_Character_Parent_C* Boss Goddess;
    APlayer_Character_BP_C* Player;
    FText Boss Name;
    FText Boss Subtitle;
    FString ID Boss Door;
    TArray<ADoor_BP_C*> Other Doors;
    bool Trigger Achievement;
    TEnumAsByte<Achievements::Type> Achievement;
    UObject* SkipCutsceneWidget;
    ULevelSequencePlayer* Current Sequence;
    bool CanSkipCutscene;
    ANPCBound_C* NPCBound;
    ULevelSequencePlayer* Last Cutscene;
    bool Debug Boss Instant Combat;
    int32 Debug Boss Fase;
    USkipCutscene_Action_UI_C* SkipCutsceneUI;
    AActor* Presscence;
    ABP_Penumbra_C* Queen;
    UNPC_Intro_C* NPCIntro;

    void Start_Chimes();
    void Stop_Chimes();
    void FadeWhiteIn();
    void FadeWhiteOut();
    void ReceiveBeginPlay();
    void Reset Door();
    void Kill Goddess();
    void Boss Title();
    void Relocate Player();
    void Close Doors();
    void Play();
    void Resume Start();
    void Teleport();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Resume End();
    void SkipCutscene();
    void Create Bound();
    void TX0();
    void Finish Last Cutscene();
    void Resume Last Cutscene();
    void Instant Combat();
    void TX1();
    void Finish Start Cutscene();
    void Resume Start Cutscene();
    void MusicPlay();
    void SkipCutscene Controller(bool Spawn);
    void Remove Title();
    void ExecuteUbergraph_BP_BossDoor_Queen(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Cutscene_OutputPin, USkipCutscene_Action_UI_C* CallFunc_Create_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool Temp_bool_IsClosed_Variable, SkipCutscene__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue_6, bool Temp_bool_Has_Been_Initd_Variable_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UDoor_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsRobiValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_2, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, int32 Temp_int_Array_Index_Variable_1, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, UDoor_BP_C* CallFunc_Array_Get_Item_1, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_1, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_Cutscene_OutputPin_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FRotator CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FRotator CallFunc_FindLookAtRotation_ReturnValue_1, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FRotator CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_K2_SetActorRotation_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue_2, FRotator CallFunc_FindLookAtRotation_ReturnValue_2, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, FRotator CallFunc_MakeRotator_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_3, FHitResult CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_7, int32 CallFunc_PostEventAtLocation_ReturnValue_8, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_9, int32 CallFunc_PostEventAtLocation_ReturnValue_10, int32 CallFunc_PostEventAtLocation_ReturnValue_11, int32 CallFunc_PostEventAtLocation_ReturnValue_12, int32 CallFunc_PostEventAtLocation_ReturnValue_13, UNPC_Intro_C* CallFunc_Create_ReturnValue_1, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ANPCBound_C* CallFunc_FinishSpawningActor_ReturnValue, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array, FVector CallFunc_K2_GetComponentLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, FRotator CallFunc_FindLookAtRotation_ReturnValue_3, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, FRotator CallFunc_MakeRotator_ReturnValue_4, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue_2, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, const TArray<FText>& K2Node_MakeArray_Array_2, const TArray<FText>& K2Node_MakeArray_Array_3, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_PostEventAtLocation_ReturnValue_14, int32 CallFunc_PostEventAtLocation_ReturnValue_15, int32 CallFunc_PostEventAtLocation_ReturnValue_16, int32 CallFunc_PostEventAtLocation_ReturnValue_17, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool K2Node_CustomEvent_Spawn, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsRobiValid_ReturnValue_4, bool CallFunc_IsRobiValid_ReturnValue_5, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, int32 CallFunc_PostEventAtLocation_ReturnValue_18, bool CallFunc_IsRobiValid_ReturnValue_6, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_19, int32 CallFunc_PostEventAtLocation_ReturnValue_20, int32 CallFunc_PostEventAtLocation_ReturnValue_21, int32 CallFunc_PostEventAtLocation_ReturnValue_22, Die__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsRobiValid_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Cutscene_OutputPin_2);
}

#endif
