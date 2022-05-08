#ifndef UE4SS_SDK_InsideTemple_Controller_HPP
#define UE4SS_SDK_InsideTemple_Controller_HPP

class AInsideTemple_Controller_C : public ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard_0;
    class AActor* TargetA;

    void Ability();
    void StopChimeSound();
    void End();
    void StartChimeSound();
    void FIN();
    void TX1();
    void TX2();
    void TX3();
    void StartCutscene();
    void TX4();
    void SkipCutscene();
    void ExecuteUbergraph_InsideTemple_Controller(int32 EntryPoint);
};

#endif
