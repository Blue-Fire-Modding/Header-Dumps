#ifndef UE4SS_SDK_Nuos_Intro_Controller_HPP
#define UE4SS_SDK_Nuos_Intro_Controller_HPP

class ANuos_Intro_Controller_C : public ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard_0;
    class AActor* TargetA;
    class ULevelSequence* Cutscene;

    void OnNotifyEnd_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
    void OnNotifyBegin_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
    void OnInterrupted_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
    void OnBlendOut_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
    void OnCompleted_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
    void OnNotifyEnd_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
    void OnNotifyBegin_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
    void OnInterrupted_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
    void OnBlendOut_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
    void OnCompleted_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
    void End();
    void TX1();
    void TX2();
    void StartCutscene();
    void FIN();
    void TX3();
    void CustomEvent_1();
    void TX4();
    void CustomEvent_3();
    void TX5();
    void StartGodRaySound();
    void CustomEvent_5();
    void DemoEnd();
    void UmbraReaction();
    void Umbra1();
    void WwiseTrigger();
    void Umbra2();
    void Umbra3();
    void ReceiveBeginPlay();
    void SkipCutscene();
    void ExecuteUbergraph_Nuos_Intro_Controller(int32 EntryPoint);
};

#endif
