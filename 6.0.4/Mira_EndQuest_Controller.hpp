#ifndef UE4SS_SDK_Mira_EndQuest_Controller_HPP
#define UE4SS_SDK_Mira_EndQuest_Controller_HPP

class AMira_EndQuest_Controller_C : public ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard_0;
    class AActor* TargetA;
    bool bLocked;

    void End();
    void CustomEvent_1();
    void TX1();
    void TX2();
    void StartCutscene();
    void SkipCutscene();
    void ExecuteUbergraph_Mira_EndQuest_Controller(int32 EntryPoint);
};

#endif
