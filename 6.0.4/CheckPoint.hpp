#ifndef UE4SS_SDK_CheckPoint_HPP
#define UE4SS_SDK_CheckPoint_HPP

class ACheckPoint_C : public ANPCBound_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_SaveCheckpoint;
    class UStaticMeshComponent* CheckpointBase;
    class UStaticMeshComponent* StaticMesh;
    class UParticleSystemComponent* ParticleSystem;
    class UDecalComponent* Decal;
    class UArrowComponent* CameraDirection;
    class UArrowComponent* PlayerDirection;
    float Timeline_0_Intensity_BDC6228346BBB15C38E8A3A7675B89F1;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_BDC6228346BBB15C38E8A3A7675B89F1;
    class UTimelineComponent* Timeline_0;
    float Radial_Glow_Glow_E75D54CA47A7A0D8F3561191F9FA213D;
    float Radial_Glow_Blur_E75D54CA47A7A0D8F3561191F9FA213D;
    TEnumAsByte<ETimelineDirection::Type> Radial_Glow__Direction_E75D54CA47A7A0D8F3561191F9FA213D;
    class UTimelineComponent* Radial Glow;
    float Glow_Eyes_Intensity_5E577C704BF9C844AE221783B4443759;
    TEnumAsByte<ETimelineDirection::Type> Glow_Eyes__Direction_5E577C704BF9C844AE221783B4443759;
    class UTimelineComponent* Glow Eyes;
    bool Debug Checkpoint;
    bool Play Checkpoint;
    FCheckpointInformation Information;
    TEnumAsByte<StreamingChunks::Type> Chunk;
    TEnumAsByte<CheckPoints::Type> CheckPoint;
    bool Awakened;
    class UMaterialInstanceDynamic* Material Statue;
    class UMaterialInstanceDynamic* Material Base;
    int32 Cost;
    class UBlueFire_Game_Instance_C* Game Instance;
    bool HasSanctuaryStone;

    void UserConstructionScript();
    void Glow Eyes__FinishedFunc();
    void Glow Eyes__UpdateFunc();
    void Radial Glow__FinishedFunc();
    void Radial Glow__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnNotifyEnd_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
    void OnNotifyBegin_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
    void OnInterrupted_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
    void OnBlendOut_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
    void OnCompleted_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
    void OnNotifyEnd_C9CB77344B86088688E17D958362AE39(FName NotifyName);
    void OnNotifyBegin_C9CB77344B86088688E17D958362AE39(FName NotifyName);
    void OnInterrupted_C9CB77344B86088688E17D958362AE39(FName NotifyName);
    void OnBlendOut_C9CB77344B86088688E17D958362AE39(FName NotifyName);
    void OnCompleted_C9CB77344B86088688E17D958362AE39(FName NotifyName);
    void SetAwakened(bool Set Glow);
    void DialogStartCall();
    void ReceiveBeginPlay();
    void QuickEnd();
    void CustomEvent_1();
    void SetCurrentCheckpoint();
    void CustomEvent();
    void UpdateFire();
    void WarpDisable();
    void WarpEnable();
    void EndOverlapCall();
    void Set Glow();
    void RadialGlow();
    void Return();
    void Mana();
    void ExitCheckpoint();
    void CustomEvent_2();
    void CustomEvent_4();
    void Get Mana();
    void CustomEvent_0();
    void ReturnQuick();
    void CustomEvent_3();
    void BeginOverlapCall();
    void ExecuteUbergraph_CheckPoint(int32 EntryPoint);
};

#endif
