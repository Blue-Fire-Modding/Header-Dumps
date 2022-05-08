#ifndef UE4SS_SDK_AllVoids_Controller_HPP
#define UE4SS_SDK_AllVoids_Controller_HPP

class AAllVoids_Controller_C : public ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Blink_Blink_F34596D74C6665671A393EB5CD259991;
    TEnumAsByte<ETimelineDirection::Type> Blink__Direction_F34596D74C6665671A393EB5CD259991;
    class UTimelineComponent* Blink;
    class AActor* TargetA;
    float Eyes power;
    FAllVoids_Controller_CFinishIntroCutscene FinishIntroCutscene;
    void FinishIntroCutscene();
    class ULevelSequencePlayer* Sequence;
    class AGlobal_Controller_C* Global Controller;

    void Blink__FinishedFunc();
    void Blink__UpdateFunc();
    void OnNotifyEnd_A701861F42511FD961D56E9284DA1991(FName NotifyName);
    void OnNotifyBegin_A701861F42511FD961D56E9284DA1991(FName NotifyName);
    void OnInterrupted_A701861F42511FD961D56E9284DA1991(FName NotifyName);
    void OnBlendOut_A701861F42511FD961D56E9284DA1991(FName NotifyName);
    void OnCompleted_A701861F42511FD961D56E9284DA1991(FName NotifyName);
    void OnNotifyEnd_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
    void OnNotifyBegin_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
    void OnInterrupted_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
    void OnBlendOut_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
    void OnCompleted_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
    void Cutscene Umbra Anim();
    void Cutscene Umbra Tunic();
    void Cutscene Void Load Screen();
    void StartCutscene();
    void Cutscene TextAllVoids 4();
    void TX3();
    void Continue();
    void EndEvent();
    void Cutscene TextAllVoids 3();
    void Cutscene TextAllVoids 2();
    void Cutscene TextAllVoids 1();
    void FIN();
    void TX1();
    void TX2();
    void TX4();
    void TX5();
    void UmbraAnim();
    void UmbraBlink();
    void UmbraSleep();
    void UmbraWakeUp();
    void Cutscene TextAllVoids 0();
    void UmbraTunic();
    void GodChimeStart();
    void GodChimeEnd();
    void SkipCutscene();
    void Cutscene CallFinish();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AllVoids_Controller(int32 EntryPoint);
    void FinishIntroCutscene__DelegateSignature();
};

#endif
