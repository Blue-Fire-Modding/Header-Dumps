#ifndef UE4SS_SDK_LevelStreamer_HPP
#define UE4SS_SDK_LevelStreamer_HPP

class ALevelStreamer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* LevelStreamingBound_SM;
    class USceneComponent* DefaultSceneRoot;
    TArray<TEnumAsByte<Areas::Type>> Area;
    bool Load;
    TArray<FName> Level;
    class APlayer_Character_BP_C* Player;

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_LevelStreamer(int32 EntryPoint);
};

#endif
