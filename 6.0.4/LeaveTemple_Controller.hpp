#ifndef UE4SS_SDK_LeaveTemple_Controller_HPP
#define UE4SS_SDK_LeaveTemple_Controller_HPP

class ALeaveTemple_Controller_C : public ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard_0;
    class AActor* TargetA;
    bool bUseMusicFix;
    FString MusicFixID;

    void OnNotifyEnd_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
    void OnNotifyBegin_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
    void OnInterrupted_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
    void OnBlendOut_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
    void OnCompleted_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
    void End();
    void FIN();
    void TX1();
    void TX2();
    void TX3();
    void TX4();
    void TX5();
    void TX6();
    void TX8();
    void StartCutscene();
    void TX9();
    void TX10();
    void GiveStoneSound();
    void UmbralookUp();
    void TX5B();
    void Quest();
    void Tutorial();
    void SkipCutscene();
    void Cutscene Begin Play Used();
    void ExecuteUbergraph_LeaveTemple_Controller(int32 EntryPoint);
};

#endif
