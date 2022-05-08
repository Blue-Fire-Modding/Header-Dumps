#ifndef UE4SS_SDK_Mira_Intro_Controller_HPP
#define UE4SS_SDK_Mira_Intro_Controller_HPP

class AMira_Intro_Controller_C : public ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard_0;
    class AActor* TargetA;

    void OnNotifyEnd_71A33EE648D2716919D1ABAFDADCD38E(FName NotifyName);
    void OnNotifyBegin_71A33EE648D2716919D1ABAFDADCD38E(FName NotifyName);
    void OnInterrupted_71A33EE648D2716919D1ABAFDADCD38E(FName NotifyName);
    void OnBlendOut_71A33EE648D2716919D1ABAFDADCD38E(FName NotifyName);
    void OnCompleted_71A33EE648D2716919D1ABAFDADCD38E(FName NotifyName);
    void TX1();
    void TX2();
    void TX3();
    void StartCutscene();
    void End();
    void CustomEvent();
    void UmbraAnim();
    void SkipCutscene();
    void ExecuteUbergraph_Mira_Intro_Controller(int32 EntryPoint);
};

#endif
