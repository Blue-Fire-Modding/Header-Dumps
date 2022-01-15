#ifndef UE4SS_SDK_NPC_Parent_HPP
#define UE4SS_SDK_NPC_Parent_HPP

class ANPC_Parent_C : UCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* ScenePOI;
    UDecalComponent* Shadow;
    UBoxComponent* LookAtBox;
    UChildActorComponent* DialogBound;
    FString ID;
    FText NPCName;
    ANPCBound_C* Bound;
    int32 TalkTimes;
    float CamDistance;
    bool HasShadow;
    ANPC_ShadowDecal_C* ShadowDecal;
    float ShadowSize;
    bool AttachPOI;
    FName POISocketName;
    bool LookAtPlayer;
    AActor* Target;
    bool NoLock;
    float PopUpZOffset;

    void UserConstructionScript();
    void AlreadyUsed();
    void Used();
    void CheckState();
    void ReceiveBeginPlay();
    void NPC Dialog Line(const TArray<FText>& TextLines, UAkAudioEvent* AkEvent, bool UseAkSoundsArray, const TArray<UAkAudioEvent*>& AkEvents);
    void NPCDialog();
    void EndD();
    void BndEvt__LookAtBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__LookAtBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void LookAtPlayerBegin();
    void LookAtPlayerEnd();
    void RunNPCBoundSet(ANPCBound_C* Bound);
    void ExecuteUbergraph_NPC_Parent(int32 EntryPoint, FString CallFunc_CheckState_Same_ID, bool CallFunc_CheckState_Used, const TArray<FText>& K2Node_CustomEvent_TextLines, UAkAudioEvent* K2Node_CustomEvent_AkEvent, bool K2Node_CustomEvent_UseAkSoundsArray, const TArray<UAkAudioEvent*>& K2Node_CustomEvent_AkEvents, ANPCBound_C* K2Node_DynamicCast_AsNPCBound, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue_1, const TArray<FText>& K2Node_MakeArray_Array, Finished__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<UAkAudioEvent*>& K2Node_MakeArray_Array_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, ANPCBound_C* K2Node_CustomEvent_Bound, FVector CallFunc_MakeVector_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult);
}

#endif
