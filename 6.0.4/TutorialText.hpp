#ifndef UE4SS_SDK_TutorialText_HPP
#define UE4SS_SDK_TutorialText_HPP

class ATutorialText_C : public AInteractionMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* Billboard;
    class UParticleSystemComponent* ParticleSystem;
    class UDecalComponent* Decal;
    bool FreezePlayer;
    TEnumAsByte<TutorialList::Type> Tutorial;
    bool OpenOnSpawn;
    bool TutOpen;
    FTutorialText_CRemoved Removed;
    void Removed();
    FString ID_Tutorial;
    bool OpenOnlyOnce;
    bool HideUthasNoDemo;
    bool CloseByDie;
    class UDemoTextTutorial_C* DemoTextTutorial;

    void UserConstructionScript();
    void PressButton();
    void Die();
    void SpawnOpen(FString ID);
    void ReceiveBeginPlay();
    void VFX Show(bool Show);
    void Take Hit();
    void ExecuteUbergraph_TutorialText(int32 EntryPoint);
    void Removed__DelegateSignature();
};

#endif
