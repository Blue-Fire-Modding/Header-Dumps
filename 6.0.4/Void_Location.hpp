#ifndef UE4SS_SDK_Void_Location_HPP
#define UE4SS_SDK_Void_Location_HPP

class AVoid_Location_C : public AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArrowComponent* Arrow;
    class UBoxComponent* Box_0;
    FTransform PreviousLocation;
    FText VoidName;
    class ULevelSequence* LevelSequence;
    bool Skip Cutscene;
    bool CanSkipCutscene;
    class USkipCutscene_Action_UI_C* SkipCutsceneWidget;
    class ULevelSequencePlayer* Current Sequence;
    bool IsPlayingCutscene;
    class UAreaIntro_C* AreaIntro;
    bool InputCutscene;
    class AOverrideListenerLocation_C* OverrideListenerController;
    class UChildActorComponent* ChildActorComponent;
    float LevelSequenceDuration;

    void InpActEvt_PC_Back_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_0(FKey Key);
    void PressButton();
    void ReceiveBeginPlay();
    void Play();
    void SkipCutscene();
    void SequenceDurationEvent(const float& SequenceDurationMessage);
    void ExecuteUbergraph_Void_Location(int32 EntryPoint);
};

#endif
