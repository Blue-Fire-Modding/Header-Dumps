#ifndef UE4SS_SDK_Master_DLC_VoidMaster_HPP
#define UE4SS_SDK_Master_DLC_VoidMaster_HPP

class AMaster_DLC_VoidMaster_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Timeline_0_Float_3E31A81A45F1CFC155B173850D75F2C5;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3E31A81A45F1CFC155B173850D75F2C5;
    class UTimelineComponent* Timeline_0;
    int32 ResetCounter;
    FString IntroSceneID;
    class APlayer_Character_BP_C* Player;
    class UBlueFire_Game_Instance_C* GameInstance;
    int32 DPadCounter;
    class ULoadScreen_C* LoadScreen;
    bool Tutorial Find Success;
    bool ShowTutorial;
    class UExtraInput_UI_C* ExtraInput;
    class AGlobal_Controller_C* Global_Controller_2_ExecuteUbergraph_Master_DLC_VoidMaster_RefProperty;
    class AIntroGlass_C* IntroGlass_2_ExecuteUbergraph_Master_DLC_VoidMaster_RefProperty;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void DisableCam();
    void CustomEvent_0();
    void MasterLevelTracker();
    void ShowTutorials();
    void HideTutorials();
    void EndIntro();
    void Play();
    void ResetDemo();
    void ReceiveBeginPlay();
    void DoneLoading();
    void LoadDemoIntro();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void DemoTimeOut();
    void DemoTimeoutCall();
    void WarningDemoTimeout();
    void CheckForCameraView();
    void GameIntro();
    void DemoUthas();
    void AdjustTargetArm();
    void ExecuteUbergraph_Master_DLC_VoidMaster(int32 EntryPoint);
};

#endif
