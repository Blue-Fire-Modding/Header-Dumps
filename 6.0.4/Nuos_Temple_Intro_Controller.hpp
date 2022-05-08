#ifndef UE4SS_SDK_Nuos_Temple_Intro_Controller_HPP
#define UE4SS_SDK_Nuos_Temple_Intro_Controller_HPP

class ANuos_Temple_Intro_Controller_C : public ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard_0;
    class AActor* TargetA;

    void End();
    void StartCutscene();
    void FIN();
    void TX1();
    void CustomEvent();
    void TX2();
    void CustomEvent_1();
    void TX3();
    void CustomEvent_2();
    void TX4();
    void Umbra();
    void GodRaySoundEnd();
    void ReceiveBeginPlay();
    void SkipCutscene();
    void GodRaySoundStart();
    void ExecuteUbergraph_Nuos_Temple_Intro_Controller(int32 EntryPoint);
};

#endif
