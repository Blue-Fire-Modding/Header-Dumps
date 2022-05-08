#ifndef UE4SS_SDK_Cinematic_Controller_Master_HPP
#define UE4SS_SDK_Cinematic_Controller_Master_HPP

class ACinematic_Controller_Master_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAkComponent* AkStopOverride;
    class UAkComponent* AkOverride;
    class UBillboardComponent* Billboard;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    class APlayer_Character_BP_C* Player;
    FString CutsceneID;
    bool CanSkipCutscene;
    class ANPCBound_C* NPCBound;
    TEnumAsByte<Areas::Type> Area;
    bool MeetCondition;
    FString Condition;
    bool DebugAlwaysRun;
    bool OverrideAudio;
    class UAkAudioEvent* CutsceneAudioOverride;
    bool Lower5dB;
    class UAkAudioEvent* StopCutsceneAudioOverride;
    bool OverrideOnlyMusic;
    class UAkAudioEvent* CutsceneAudioOverride2;
    class UAkAudioEvent* StopCutsceneAudioOverride2;
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
    class USkipCutscene_Action_UI_C* SkipCutsceneWidget;
    class ULevelSequencePlayer* Current Sequence;
    bool EnableSkipCutscene;
    bool Instant Deactivate Box;
    bool TimeFix;
    bool EnableTriggerCutscene;
    bool BlockTimer;
    float CurrentSequenceDuration;
    bool GameAnalytics;
    bool GA Sended;
    FString GA EventString;

    void Get Current Sequence Duration(float& Duration);
    void InpActEvt_PC_Back_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void CreateBound();
    void AreaName();
    void StartCutscene();
    void EndCutscene();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void Cutscene Begin Play Used();
    void ForceTriggerCutscene();
    void WriteID();
    void SkipCutscene();
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ForceCutscene();
    void Write Custom ID();
    void Deactivate Box();
    void GA Event(FString NewParam);
    void ExecuteUbergraph_Cinematic_Controller_Master(int32 EntryPoint);
    void StartMusicIntroCutscene__DelegateSignature();
};

#endif
