#ifndef UE4SS_SDK_NPC_Parent_HPP
#define UE4SS_SDK_NPC_Parent_HPP

class ANPC_Parent_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* ScenePOI;
    class UDecalComponent* Shadow;
    class UBoxComponent* LookAtBox;
    class UChildActorComponent* DialogBound;
    FString ID;
    FText NPCName;
    class ANPCBound_C* Bound;
    int32 TalkTimes;
    float CamDistance;
    bool HasShadow;
    class ANPC_ShadowDecal_C* ShadowDecal;
    float ShadowSize;
    bool AttachPOI;
    FName POISocketName;
    bool LookAtPlayer;
    class AActor* Target;
    bool NoLock;
    float PopUpZOffset;

    void UserConstructionScript();
    void AlreadyUsed();
    void Used();
    void CheckState();
    void ReceiveBeginPlay();
    void NPC Dialog Line(const TArray<FText>& TextLines, class UAkAudioEvent* AkEvent, bool UseAkSoundsArray, const TArray<class UAkAudioEvent*>& AkEvents);
    void NPCDialog();
    void EndD();
    void BndEvt__LookAtBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__LookAtBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void RunNPCBoundSet(class ANPCBound_C* Bound);
    void ExecuteUbergraph_NPC_Parent(int32 EntryPoint);
};

#endif
