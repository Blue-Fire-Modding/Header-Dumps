#ifndef UE4SS_SDK_Safe_Point_HPP
#define UE4SS_SDK_Safe_Point_HPP

class ASafe_Point_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDecalComponent* Decal;
    class UBillboardComponent* Billboard;
    class UArrowComponent* Arrow;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    class APlayer_Character_BP_C* Player;
    bool DEPRECATEDIgnoreHasToBeOnFloor;
    float ZOffeset;
    TArray<FName> Visible Levels;
    TArray<FName> Hide Levels;
    class AMusic_Trigger_Enter_Exit_2_C* Music Trigger;

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void StopCheck();
    void ExecuteUbergraph_Safe_Point(int32 EntryPoint);
};

#endif
