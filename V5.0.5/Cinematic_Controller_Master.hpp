#ifndef UE4SS_SDK_Cinematic_Controller_Master_HPP
#define UE4SS_SDK_Cinematic_Controller_Master_HPP

class ACinematic_Controller_Master_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAkComponent* AkStopOverride;
    UAkComponent* AkOverride;
    UBillboardComponent* Billboard;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    APlayer_Character_BP_C* Player;
    FString CutsceneID;
    bool CanSkipCutscene;
    ANPCBound_C* NPCBound;
    TEnumAsByte<Areas::Type> Area;
    bool MeetCondition;
    FString Condition;
    bool DebugAlwaysRun;
    bool OverrideAudio;
    UAkAudioEvent* CutsceneAudioOverride;
    bool Lower5dB;
    UAkAudioEvent* StopCutsceneAudioOverride;
    bool OverrideOnlyMusic;
    UAkAudioEvent* CutsceneAudioOverride2;
    UAkAudioEvent* StopCutsceneAudioOverride2;
    bool Mono_VO;
    bool UseInBeginPlay;
    float Delay;
    bool CharacterMakeUpGain;
    bool RequireItem;
    TEnumAsByte<Items::Type> ItemRequired;
    bool IsKeyItem;
    bool InstantWriteID;
    FCinematic_Controller_Master_CStartMusicIntroCutscene StartMusicIntroCutscene;
    void StartMusicIntroCutscene();
    float DelayStartMusicIntro;
    USkipCutscene_Action_UI_C* SkipCutsceneWidget;
    ULevelSequencePlayer* Current Sequence;
    bool EnableSkipCutscene;
    bool Instant Deactivate Box;
    bool TimeFix;
    bool EnableTriggerCutscene;
    bool BlockTimer;
    float CurrentSequenceDuration;
    bool GameAnalytics;
    bool GA Sended;
    FString GA EventString;

    void Get Current Sequence Duration(float& Duration, FQualifiedFrameTime CallFunc_GetDuration_ReturnValue, FFrameRate CallFunc_GetFrameRate_ReturnValue, FFrameNumber CallFunc_BreakQualifiedFrameTime_Frame, FFrameRate CallFunc_BreakQualifiedFrameTime_FrameRate, float CallFunc_BreakQualifiedFrameTime_SubFrame, int32 CallFunc_BreakFrameRate_Numerator, int32 CallFunc_BreakFrameRate_Denominator, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue);
    void InpActEvt_PC_Back_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void CreateBound();
    void AreaName();
    void StartCutscene();
    void EndCutscene();
    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void Cutscene Begin Play Used();
    void ForceTriggerCutscene();
    void WriteID();
    void SkipCutscene();
    void ReceiveActorEndOverlap(AActor* OtherActor);
    void ForceCutscene();
    void Write Custom ID();
    void Deactivate Box();
    void GA Event(FString NewParam);
    void ExecuteUbergraph_Cinematic_Controller_Master(int32 EntryPoint, UPlayerController* CallFunc_GetPlayerController_ReturnValue, USkipCutscene_Action_UI_C* CallFunc_Create_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ANPCBound_C* CallFunc_FinishSpawningActor_ReturnValue, FKey K2Node_InputActionEvent_Key, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, FString CallFunc_CheckState_Same_ID_1, bool CallFunc_CheckState_Used_1, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_1, AActor* K2Node_Event_OtherActor_1, float CallFunc_PlayAnimMontage_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_4, int32 CallFunc_PostEventAtLocation_ReturnValue_5, bool CallFunc_IsRobiValid_ReturnValue_2, bool CallFunc_IsRobiValid_ReturnValue_3, int32 CallFunc_PostEventAtLocation_ReturnValue_6, int32 CallFunc_PostEventAtLocation_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_8, int32 CallFunc_PostEventAtLocation_ReturnValue_9, FKey K2Node_InputActionEvent_Key_1, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_ItemAmount, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable, int32 CallFunc_PostEventAtLocation_ReturnValue_10, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable, const OnAkPostEventCallback__DelegateSignature Temp_delegate_Variable_1, int32 CallFunc_PostAkEvent_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, const TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 CallFunc_PostAkEvent_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_4, bool CallFunc_IsInViewport_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue_3, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_OtherActor, UPlayerController* CallFunc_GetPlayerController_ReturnValue_4, FString CallFunc_CheckState_Same_ID_2, bool CallFunc_CheckState_Used_2, int32 CallFunc_PostEventAtLocation_ReturnValue_11, int32 CallFunc_PostEventAtLocation_ReturnValue_12, int32 CallFunc_PostEventAtLocation_ReturnValue_13, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_5, bool CallFunc_IsPlaying_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, APawn* CallFunc_GetPlayerPawn_ReturnValue_3, bool CallFunc_IsRobiValid_ReturnValue_6, UPlayer_Character_BP_C* K2Node_DynamicCast_AsPlayer_Character_BP_1, bool K2Node_DynamicCast_bSuccess_1, FString K2Node_CustomEvent_NewParam);
    void StartMusicIntroCutscene__DelegateSignature();
}

#endif
