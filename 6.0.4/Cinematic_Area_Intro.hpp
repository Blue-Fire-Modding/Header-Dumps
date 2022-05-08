#ifndef UE4SS_SDK_Cinematic_Area_Intro_HPP
#define UE4SS_SDK_Cinematic_Area_Intro_HPP

class ACinematic_Area_Intro_C : public ACinematic_Controller_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UArrowComponent* Arrow;
    bool Enable;
    class ULevelSequence* Sequence_0;
    TEnumAsByte<StreamingChunks::Type> Chunk;
    bool NotVisited;
    bool MoveTo;
    bool FadeIn;
    bool FadeOut;
    float FadeInDuration;
    class AActor* TargetA;
    bool ShowHudEnd;
    bool CustomID;
    bool bUseMusicFix;
    FString MusixFixID;
    bool BindPlayerToFixTimer;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void StartCutscene();
    void End();
    void AreaName();
    void SkipCutscene();
    void Write Custom ID();
    void Cutscene Begin Play Used();
    void CustomEvent_0();
    void ExecuteUbergraph_Cinematic_Area_Intro(int32 EntryPoint);
};

#endif
