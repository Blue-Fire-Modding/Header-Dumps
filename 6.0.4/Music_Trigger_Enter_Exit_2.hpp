#ifndef UE4SS_SDK_Music_Trigger_Enter_Exit_2_HPP
#define UE4SS_SDK_Music_Trigger_Enter_Exit_2_HPP

class AMusic_Trigger_Enter_Exit_2_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class UAkComponent* Ak_Component;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    class UAkAudioEvent* Ak_Event_Start;
    TSubclassOf<class UAkComponent> Component;
    class UAkAudioEvent* Ak_Event_Stop;
    bool StartInBeginPlay;
    FString ID;
    class APlayer_Character_BP_C* Player;
    bool CustomIntroGlass;
    bool StartMusicWithIntroCutscene;
    FString IDIntroCutscene;
    float DelayMusic;
    class ACinematic_Controller_Master_C* Target;
    bool UseMeshForCollision;
    bool ShowMeshCollisionPreview;
    class UStaticMesh* StaticMesh;

    void UserConstructionScript();
    void Play2();
    void Replay Event Start();
    void ChangeCol();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveBeginPlay();
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void Play();
    void PlayerDeath();
    void ExecuteUbergraph_Music_Trigger_Enter_Exit_2(int32 EntryPoint);
};

#endif
