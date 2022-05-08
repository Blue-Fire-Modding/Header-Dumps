#ifndef UE4SS_SDK_Mechanics_Master_HPP
#define UE4SS_SDK_Mechanics_Master_HPP

class AMechanics_Master_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    bool Persistent;
    FString ID;
    bool Active;

    void UserConstructionScript();
    void Activate(bool ExternalControl, bool BeginPlay, bool ChangeCamera, bool Instant, bool Is Cutscene, bool Affect Timer);
    void Deactivate(bool Instant, bool Change Camera);
    void AlreadyUsed();
    void SetPermanent();
    void ExecuteUbergraph_Mechanics_Master(int32 EntryPoint);
};

#endif
