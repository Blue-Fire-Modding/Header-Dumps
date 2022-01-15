#ifndef UE4SS_SDK_Void_Location_HPP
#define UE4SS_SDK_Void_Location_HPP

class AVoid_Location_C : AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UArrowComponent* Arrow;
    UBoxComponent* Box_0;
    FTransform PreviousLocation;
    FText VoidName;
    ULevelSequence* LevelSequence;
    bool Skip Cutscene;
    bool CanSkipCutscene;
    USkipCutscene_Action_UI_C* SkipCutsceneWidget;
    ULevelSequencePlayer* Current Sequence;
    bool IsPlayingCutscene;
    UAreaIntro_C* AreaIntro;
    bool InputCutscene;
    AOverrideListenerLocation_C* OverrideListenerController;
    UChildActorComponent* ChildActorComponent;
    float LevelSequenceDuration;

    void InpActEvt_PC_Back_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_0(FKey Key);
    void PressButton();
    void ReceiveBeginPlay();
    void Play();
    void SkipCutscene();
    void SequenceDurationEvent(const float& SequenceDurationMessage);
    void ExecuteUbergraph_Void_Location(int32 EntryPoint, UAreaIntro_C* CallFunc_Create_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue, ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPackagedForDistribution_ReturnValue, UPlayerController* CallFunc_GetPlayerController_ReturnValue, USkipCutscene_Action_UI_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsRobiValid_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue, FKey K2Node_InputActionEvent_Key, FKey K2Node_InputActionEvent_Key_1, bool CallFunc_IsRobiValid_ReturnValue_2, UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, float CallFunc_PlayAnimMontage_ReturnValue, APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, OnMovieSceneSequencePlayerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float CallFunc_Cutscene_OutputPin, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_2, const float K2Node_CustomEvent_SequenceDurationMessage, FFrameRate CallFunc_GetFrameRate_ReturnValue, FQualifiedFrameTime CallFunc_GetDuration_ReturnValue, int32 CallFunc_BreakFrameRate_Numerator, int32 CallFunc_BreakFrameRate_Denominator, FFrameNumber CallFunc_BreakQualifiedFrameTime_Frame, FFrameRate CallFunc_BreakQualifiedFrameTime_FrameRate, float CallFunc_BreakQualifiedFrameTime_SubFrame, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_PostEventAtLocation_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue, AHolyGodStone_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsRobiValid_ReturnValue_3);
}

#endif
